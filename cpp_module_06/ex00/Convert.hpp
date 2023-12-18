#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>

class Convert
{
	public:
		Convert();
		Convert(const std::string& literal);
		Convert(const Convert& copy);
		~Convert();
		Convert& operator=(const Convert& copy);
		void convert(const std::string& literal);
};

#endif