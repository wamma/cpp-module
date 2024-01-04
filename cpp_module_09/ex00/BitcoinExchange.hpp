#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>
#include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, double> priceData;
		std::string _fileName;
		std::string _filePath;

		void parseFile(const std::string &fileName);
		bool isValidDate(const std::string &date);
		bool isValidValue(const std::string &value);

	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & other);
		BitcoinExchange &operator=(const BitcoinExchange& other);
		void loadData(const std::string &fileName);
		double getBitcoinValueOnDate(const std::string &date, double amount);
		void handleException(const std::string &errorMessage);
		void trim(std::string &str);
};

#endif