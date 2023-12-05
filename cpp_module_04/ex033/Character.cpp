#include "Character.hpp"

Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; ++i)
	{
		inventory[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		delete inventory[i];
	}
}

Character::Character(const Character &other) : name(other.name)
{
	for (int i = 0; i < 4; ++i)
	{
		inventory[i] = NULL;
	}
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; ++i)
		{
			delete inventory[i];
			inventory[i] = NULL;
			if (other.inventory[i])
			{
				inventory[i] = other.inventory[i]->clone();
			}
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
	{
		inventory[idx]->use(target);
	}
	else
	{
		std::cout << "Invalid index of unassigned Materia slot." << std::endl;
	}
}