#include "Convert.hpp"

int main(int argc, char **argv)
{
	Convert convert;

	if (argc != 2)
	{
		std::cout << "Usage: ./convert [literal]" << std::endl;
		return 1;
	}
	convert.convert(argv[1]);
	return 0;
}