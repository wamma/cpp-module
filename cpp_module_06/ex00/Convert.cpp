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

void Convert::convert(const std::string& literal)
{
	try
	{
		int intValue = std::stoi(literal);
		char charValue = static_cast<char>(intValue);
		float floatValue = std::stof(literal);
		double doubleValue = std::stod(literal);

		std::cout << "char: " << charValue << std::endl;
		std::cout << "int: " << intValue << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Conversion error: " << e.what() << std::endl;
	}
}

