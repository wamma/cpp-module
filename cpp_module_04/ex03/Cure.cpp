#include "Cure.hpp"

Cure::Cure() : type("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &other) : type(other.getType()) {}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "복사 할당 완료: " << other.getType() << std::endl;
	return *this;
}

std::string const &Cure::getType() const
{
	return type;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}