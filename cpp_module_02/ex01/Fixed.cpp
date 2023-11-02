#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_point_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->fixed_point_value = rhs.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point_value = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawbits member function called" << std::endl;
	return this->fixed_point_value;
}