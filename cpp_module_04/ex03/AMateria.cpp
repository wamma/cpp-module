#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const AMateria &copy) : _type(copy._type) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &copy) {
	if (this != &copy)
		_type = copy._type;
	return *this;
}

std::string const &getType() const {
	return _type;
}

AMateria* clone() const {
	return new AMateria(*this);
}

void use(ICharacter& target) {}