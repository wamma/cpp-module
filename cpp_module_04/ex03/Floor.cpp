#include "Floor.hpp"

Floor::Floor()
{
	for (int i = 0; i < slotcount; ++i)
	{
		slots[i] = NULL;
	}
}

Floor::~Floor()
{
	for (int i = 0; i < slotcount; ++i)
	{
		if (slots[i] != NULL)
		{
			delete slots[i];
		}
	}
}

void Floor::dropAmateria(int slotNumber)
{
	if (slotNumber >= 0 && slotNumber < slotcount && slots[slotNumber] != NULL)
	{
		addItem(slots[slotNumber]);
		slots[slotNumber] = NULL;
	}
}

void Floor::addItem(AMateria *item)
{
	for (int i = 0; i < slotcount; ++i)
	{
		if (slots[i] == NULL)
		{
			slots[i] = item;
			return;
		}
	}
	std::cout << "Floor is full." << std::endl;
}