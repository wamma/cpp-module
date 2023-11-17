#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {}

Fixed::Fixed(const Fixed &source) : _fixedPointValue(source._fixedPointValue) {}

Fixed::Fixed(const int value) : _fixedPointValue(value << bits) {}

Fixed::Fixed(const float value) : _fixedPointValue(roundf(value * (1 << bits))) {}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &source) {
	if (this == &source)
		return *this;
	this->_fixedPointValue = source._fixedPointValue;
	return *this;
}

Fixed Fixed::operator-(const Fixed &source) const {
	return Fixed(this->toFloat() - source.toFloat());
}

Fixed Fixed::operator*(const Fixed &source) const {
	return Fixed(this->toFloat() * source.toFloat());
}

bool Fixed::operator>(const Fixed &source) const {
	return this->toFloat() > source.toFloat();
}

bool Fixed::operator<(const Fixed &source) const {
	return this->toFloat() < source.toFloat();
}

int Fixed::toInt() const {
	return _fixedPointValue >> bits;
}

float Fixed::toFloat() const {
	return (float)_fixedPointValue / (float)(1 << bits);
}

std::ostream& operator<<(std::ostream &out, Fixed const &value) {
	out << value.toFloat();
	return out;
}