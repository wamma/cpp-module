#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <limits>
# include <climits>

class Convert
{
	private:
		Convert(const Convert& copy);
		Convert& operator=(const Convert& copy);
		void handleSpecialCases(const std::string& literal);
		bool isSpecialCase(const std::string& literal);

	public:
		Convert();
		Convert(const std::string& literal);
		~Convert();
		void convert(const std::string& literal);
};

#endif