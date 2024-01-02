#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	else
	{
		check_valid_file(argv[1]);
		std::ifstream file(argv[1]);
		if (!file.is_open())
		{
			std::cout << "Error: could not open file." << std::endl;
			return 1;
		}
		file.close();
		BitcoinExchange exchange;
		exchange.run(argv[1]);
	}
	return 0;
}