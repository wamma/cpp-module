#include "Fixed.hpp"

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( 10 );
// 	Fixed const c( 42.42f );
// 	Fixed const d( b );
// 	a = Fixed( 1234.4321f );
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// 	return 0;
// }

int main( void ) {
	Fixed a;
	Fixed b;
	Fixed c;
	Fixed d;

	a = Fixed(3.14f);
	b = Fixed(42);
	c = Fixed(-42);
	d = Fixed(-42.159f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a's Rawbits: " << a.getRawBits() << std::endl;
	std::cout << "b's Rawbits: " << b.getRawBits() << std::endl;
	std::cout << "c's Rawbits: " << c.getRawBits() << std::endl;
	std::cout << "d's Rawbits: " << d.getRawBits() << std::endl;

	std::cout << "\n-----------------\n" << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// std::cout << "\n-----------------\n" << std::endl;

	// std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	// std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	// std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	// std::cout << "d is " << d.toFloat() << " as float" << std::endl;

	// std::cout << "\n-----------------\n" << std::endl;
	return 0;
}
