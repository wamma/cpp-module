#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice() : type("ice")
{
	std::cout << "Ice 기본 생성자 호출." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice 소멸자 호출." << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other) {}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return *this;
}

std::string const &Ice::getType() const
{
	return type;
}

Ice *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
