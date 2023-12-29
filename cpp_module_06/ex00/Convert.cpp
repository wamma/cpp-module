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
		long temp = std::stol(literal);
		std::istringstream iss(literal);
		char charValue;
		int intValue;
		float floatValue;
		double doubleValue;

		// charValue 처리 로직
		if (temp >= static_cast<long>(CHAR_MIN) && temp <= static_cast<long>(CHAR_MAX))
		{
			charValue = static_cast<char>(temp);
			if (std::isprint(charValue))
			{
				std::cout << "char: '" << charValue << "'" << std::endl;
			}
			else
			{
				std::cout << "char: Non displayable" << std::endl;
			}
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
		}

		// intValue 처리 로직
		iss >> intValue;
		if (!iss.fail())
		{
			std::cout << "int: " << intValue << std::endl;
		}
		else
		{
			std::cout << "int: impossible" << std::endl;
		}

		// floatValue 처리 로직
		iss.clear();
		iss.str(literal);
		iss >> floatValue;
		if (!iss.fail())
		{
			std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
		}
		else
		{
			std::cout << "float: impossible" << std::endl;
		}

		// double 처리 로직
		iss.clear();
		iss.str(literal);
		iss >> doubleValue;
		if (!iss.fail())
		{
			std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
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

