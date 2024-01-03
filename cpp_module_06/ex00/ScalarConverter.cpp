#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	*this = copy;
}

ScalarConverter::ScalarConverter(const std::string& literal)
{
	convert(literal);
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
	(void)copy;
	return *this;
}

bool ScalarConverter::isSpecialCase(const std::string& literal)
{
	return (literal == "nan" || literal == "nanf" || literal == "inf" \
	|| literal == "inff" || literal == "+inf" || literal == "+inff" \
	|| literal == "-inf" || literal == "-inff");
}

void ScalarConverter::handleSpecialCases(const std::string& literal)
{
	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (literal == "inf" || literal == "inff" || literal == "+inff" || literal == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal.substr(0, literal.size() - 1) << std::endl;
	}
	else if (literal == "+inf" || literal == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << "f" << std::endl;
		std::cout << "double: " << literal << std::endl;
	}
}

void ScalarConverter::convert(const std::string& literal)
{
	if (isSpecialCase(literal))
	{
		handleSpecialCases(literal);
		return;
	}
	try
	{
		std::istringstream iss(literal);
		long temp;
		iss >> temp;

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
		iss.clear();
		iss.str(literal);
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
		std::string floatLiteral = literal;
		size_t foundF = floatLiteral.find_last_of("fF");
		if (foundF != std::string::npos)
		{
			floatLiteral = floatLiteral.substr(0, foundF);
		}
		iss.clear();
		iss.str(floatLiteral);
		iss>>floatValue;
		if (!iss.fail() && iss.eof())
		{
			std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
		}
		else
		{
			std::cout << "float: impossible" << std::endl;
		}

		// double 처리 로직
		std::string doubleLiteral = literal;
		foundF = doubleLiteral.find_last_of("fF");
		if (foundF != std::string::npos)
		{
			doubleLiteral = doubleLiteral.substr(0, foundF);
		}
		iss.clear();
		iss.str(doubleLiteral);
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

