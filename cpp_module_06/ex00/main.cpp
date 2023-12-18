#include "Convert.hpp"

int main()
{
	Convert convert;

	std::cout << "literal: 0\n" << std::endl;
	convert.convert("0");
	std::cout << "\nliteral: 42\n" << std::endl;
	convert.convert("42");
	convert.convert("42.0");
	convert.convert("42.0f");
	convert.convert("42.0f");
	convert.convert("nan");
	convert.convert("nanf");
	convert.convert("inf");

	return 0;
}