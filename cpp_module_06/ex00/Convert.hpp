#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <climits>

class Convert
{
	private:
		void handleSpecialCases(const std::string& literal);
		bool isSpecialCase(const std::string& literal);

	public:
		Convert();
		Convert(const Convert& copy);
		Convert(const std::string& literal);
		~Convert();
		Convert& operator=(const Convert& copy);
		void convert(const std::string& literal);
};

#endif