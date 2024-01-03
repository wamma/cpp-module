#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	ScalarConverter convert;

	if (argc != 2)
	{
		std::cout << "Usage: ./ScalarConverter [literal]" << std::endl;
		return 1;
	}
	convert.convert(argv[1]);
	return 0;
}