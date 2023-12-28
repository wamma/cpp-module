#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(const Convert& copy)
{
	*this = copy;
}

Convert::Convert(const std::string& literal)
{
	convert(literal);
}

Convert::~Convert() {}

Convert& Convert::operator=(const Convert& copy)
{
	(void)copy;
	return *this;
}

bool Convert::isSpecialCase(const std::string& literal)
{
	return (literal == "nan" || literal == "nanf" || literal == "inf" \
	|| literal == "inff" || literal == "+inf" || literal == "+inff" \
	|| literal == "-inf" || literal == "-inff");
}

void Convert::handleSpecialCases(const std::string& literal)
{
	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (literal == "+inf" || literal == "-inf" || literal == "+inff" || literal == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal.substr(0, literal.size() - 1) << std::endl;
	}
	else if (literal == "inf" || literal == "inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal.substr(0, literal.size() - 1) << std::endl;
		std::cout << "double: " << literal.substr(0, literal.size() - 1) << std::endl;
	}
}

void Convert::convert(const std::string& literal)
{
	if (isSpecialCase(literal))
	{
		handleSpecialCases(literal);
		return;
	}
	try
	{
		std::istringstream iss(literal);
		char charValue;
		int intValue;
		float floatValue;
		double doubleValue;

		if (literal.length() == 1)
		{
			charValue = literal[0];
			if (std::isprint(charValue))
			{
				std::cout << "char: '" << charValue << "'" << std::endl;
			}
			else
			{
				std::cout << "char: impossible" << std::endl;
			}
		}
		iss >> intValue;
		if (!iss.fail())
		{
			std::cout << "int: " << intValue << std::endl;
		}
		else
		{
			std::cout << "int: impossible" << std::endl;
		}
		iss.clear();
		iss.str(literal);
		iss >> floatValue;
		if (!iss.fail())
		{
			std::cout << "float: " << floatValue << std::endl;
		}
		else
		{
			std::cout << "float: impossible" << std::endl;
		}
		iss.clear();
		iss.str(literal);
		iss >> doubleValue;
		if (!iss.fail())
		{
			std::cout << "double: " << doubleValue << std::endl;
		}
		else
		{
			std::cout << "double: impossible" << std::endl;
		}
	}
	catch (const std::exception& e)
	{
		std::cout << "Conversion error: " << e.what() << std::endl;
	}
}

