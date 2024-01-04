#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
	{
		this->priceData = other.priceData;
		this->_fileName = other._fileName;
		this->_filePath = other._filePath;
	}
	return (*this);
}

void BitcoinExchange::handleException(const std::string &message)
{
	std::cerr << message << std::endl;
}

void BitcoinExchange::loadData(const std::string &fileName)
{
	this->_fileName = fileName;
	this->parseFile(fileName);
}

void BitcoinExchange::trim(std::string &str)
{
	size_t start = str.find_first_not_of(" \t");
	size_t end = str.find_last_not_of(" \t");

	if (start != std::string::npos && end != std::string::npos)
	{
		str = str.substr(start, end - start + 1);
	}
	else if (start != std::string::npos)
	{
		str = str.substr(start);
	}
	else
	{
		str.clear();
	}
}

void BitcoinExchange::parseFile(const std::string &fileName)
{
	std::ifstream file(fileName);
	if (!file.is_open())
	{
		handleException("File not found");
		return;
	}
	std::string line;
	while (std::getline(file, line))
	{
		size_t pipePos = line.find('|');
		if (pipePos == std::string::npos)
		{
			handleException("Invalid file format");
			continue;
		}
		std::string date = line.substr(0, pipePos);
		std::string valueStr = line.substr(pipePos + 1);
		trim(date);
		trim(valueStr);

		if (date.empty() || valueStr.empty())
		{
			handleException("Invalid file format: Empty date or value");
			continue;
		}

        if (!isValidDate(date))
        {
            handleException("Invalid file format: Invalid date '" + date + "'");
            continue;
        }

        if (!isValidValue(valueStr))
        {
            handleException("Invalid file format: Invalid value '" + valueStr + "'");
            continue;
        }

        double value = std::atof(valueStr.c_str());
        priceData[date] = value;
	}
}

bool BitcoinExchange::isValidDate(const std::string &date)
{
	if (date.length() != 10)
	{
		return false;
	}
	if (date[4] != '-' || date[7] != '-')
	{
		return false;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
		{
			continue;
		}
		if (date[i] < '0' || date[i] > '9')
		{
			return false;
		}
	}
	return true;
}

bool BitcoinExchange::isValidValue(const std::string &value)
{
	std::istringstream iss(value);
	double val;
	if (!(iss >> val))
	{
		return false;
	}
	return val >= 0.0 && val <= 1000.0;
}

double BitcoinExchange::getBitcoinValueOnDate(const std::string &date, double amount)
{
	std::map<std::string, double>::iterator it = priceData.find(date);
	if (it != priceData.end())
	{
		return amount * it->second;
	}
	else
	{
		handleException("Date not found in the database");
		return 0.0;
	}
}