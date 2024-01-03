#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <climits>

class ScalarConverter
{
	private:
		void handleSpecialCases(const std::string& literal);
		bool isSpecialCase(const std::string& literal);

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter(const std::string& literal);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& copy);
		void convert(const std::string& literal);
};

#endif