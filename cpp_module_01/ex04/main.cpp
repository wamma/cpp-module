#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		Replace replace;

		replace.replace(argv[1], argv[2], argv[3]);
	}
	else
		std::cerr << "Error: wrong number of arguments" << std::endl;
	return 0;
}