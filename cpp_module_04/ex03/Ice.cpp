#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria(other) {}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice& other) {
	if (this == &other) {
		return *this;
	}
	this->_xp = other._xp;
	return *this;
}

AMateria* clone() const {
	return new Ice(*this);
}