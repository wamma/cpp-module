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
		if (inventory[i])
		{
			delete inventory[i];
		}
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
			std::cout << m->getType() << " Equip finish." << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full. Cannot equip more Materia." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid index. Cannot unequip Materia." << std::endl;
		return ;
	}
	floor.dropAmateria(idx); // 바닥 클래스에 담아두기
	inventory[idx] = NULL;
	std::cout << "Unequip finish." << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid index of unassigned Materia slot." << std::endl;
		return;
	}
	if (inventory[idx])
	{
		inventory[idx]->use(target);
	}
	else
	{
		std::cout << "No Materia equipped in this slot." << std::endl;
	}
}

AMateria* Character::getMateriaType(int index) const
{
	if (index < 0 || index >= 4)
	{
		return NULL;
	}
	return inventory[index];
}