#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <sstream>

class Convert
{
	private:
		void handleSpecialCases(const std::string& literal);
		bool isSpecialCase(const std::string& literal);
		Convert();
		Convert(const Convert& copy);
		Convert& operator=(const Convert& copy);

	public:
		Convert(const std::string& literal);
		~Convert();
		void convert(const std::string& literal);
};

#endif