#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &other) : AMateria(other) {}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}