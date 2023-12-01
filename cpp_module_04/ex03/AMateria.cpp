#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const AMateria &copy) : _type(copy._type) {}

AMateria::~AMateria() {
	delete this;
}

AMateria& AMateria::operator=(const AMateria &copy) {
	if (this != &copy)
		_type = copy._type;
	return *this;
}

std::string const& AMateria::getType() const {
	return _type;
}

AMateria* AMateria::clone() const {
	return new AMateria(*this);
}

void use(ICharacter& target) {}