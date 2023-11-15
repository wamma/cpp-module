#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source) : _fixedPointValue(source._fixedPointValue) {
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _fixedPointValue(value << bits) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fixedPointValue(roundf(value * (1 << bits))) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &source) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &source)
		return *this;
	this->_fixedPointValue = source._fixedPointValue;
	return *this;
}

Fixed Fixed::operator+(const Fixed &source) const {
	return Fixed(this->toFloat() + source.toFloat());
}

Fixed Fixed::operator-(const Fixed &source) const {
	return Fixed(this->toFloat() - source.toFloat());
}

Fixed Fixed::operator*(const Fixed &source) const {
	return Fixed(this->toFloat() * source.toFloat());
}

Fixed Fixed::operator/(const Fixed &source) const {
	return Fixed(this->toFloat() / source.toFloat());
}

bool Fixed::operator>(const Fixed &source) const {
	return this->toFloat() > source.toFloat();
}

bool Fixed::operator<(const Fixed &source) const {
	return this->toFloat() < source.toFloat();
}

bool Fixed::operator>=(const Fixed &source) const {
	return this->toFloat() >= source.toFloat();
}

bool Fixed::operator<=(const Fixed &source) const {
	return this->toFloat() <= source.toFloat();
}

bool Fixed::operator==(const Fixed &source) const {
	return this->toFloat() == source.toFloat();
}

bool Fixed::operator!=(const Fixed &source) const {
	return this->toFloat() != source.toFloat();
}

Fixed &Fixed::operator++() {
	++_fixedPointValue;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	this->operator++();
	return temp;
}

Fixed &Fixed::operator--() {
	--_fixedPointValue;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	this->operator--();
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	else
		return b;
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
	// std::cout << "getRawbits member function called" << std::endl;
	return this->_fixedPointValue;
}

std::ostream& operator<<(std::ostream &out, Fixed const &value) {
	out << value.toFloat();
	return out;
}