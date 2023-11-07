#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source) : fixedPointValue(source.fixedPointValue) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value) : fixedPointValue(value << bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : fixedPointValue(roundf(value * (1 << bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &source) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &source)
		return *this;
	this->fixedPointValue = source.fixedPointValue;
	return *this;
}

int Fixed::toInt() const {
	return fixedPointValue >> bits;
}

float Fixed::toFloat() const {
	return (float)fixedPointValue / (float)(1 << bits);
}

void Fixed::setRawBits(int const raw) {
	this->fixedPointValue = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawbits member function called" << std::endl;
	return this->fixedPointValue;
}

std::ostream& operator<<(std::ostream &out, Fixed const &value) {
	out << value.toFloat();
	return out;
}