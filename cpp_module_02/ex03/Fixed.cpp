#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source) : _fixedPointValue(source._fixedPointValue) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fixedPointValue(roundf(value * (1 << bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &source) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &source)
		return *this;
	this->_fixedPointValue = source._fixedPointValue;
	return *this;
}

int Fixed::toInt() const {
	return _fixedPointValue >> bits;
}

float Fixed::toFloat() const {
	return (float)_fixedPointValue / (float)(1 << bits);
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawbits member function called" << std::endl;
	return this->_fixedPointValue;
}
