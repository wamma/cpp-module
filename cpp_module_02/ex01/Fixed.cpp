#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed	&Fixed::operator=(const Fixed &source) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &source) // 자기 자신에 대한 할당을 방지하는 역할
		return *this;
	this->_fixedPointValue = source.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

int Fixed::toInt() const {
	return this->_fixedPointValue >> this->_fractionalBits;
}

float Fixed::toFloat() const {
	return (float)_fixedPointValue / (float)(1 << _fractionalBits);
}

std::ostream& operator<<(std::ostream &out, Fixed const &value) {
	out << value.toFloat();
	return out;
}
