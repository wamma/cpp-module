#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

class Replace {
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;

	public:
		void replace(std::string filename, std::string s1, std::string s2);
};

#endif