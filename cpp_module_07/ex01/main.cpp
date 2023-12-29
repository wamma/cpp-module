#include "iter.hpp"

static void printInt(const int &n)
{
	std::cout << "Int: " << n << std::endl;
}

static void printChar(const char &c)
{
	std::cout << "Char: " << c << std::endl;
}

int main()
{
	int intArray[] = {2, 1, 4, 3, 5};
	char charArray[] = "Hello World!";

	iter(intArray, 5, printInt);
	iter(charArray, 12, printChar);
	return 0;
}