#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>
#include <fstream>

class BitcoinExchange
{
	private:
		// std::map<std::string, double>;
		std::string _filename;
		std::string _filePath;

	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & other);
		operator=(BitcoinExchange const & other);
		void check_valid_file(std::string filename);
		void run(std::string filename);
		
};