#include "Character.hpp"

Character::Character(std::string name) {
	this->_name = name;
	this->numOfEquip = 0;
	for (int i = 0; i < _inventorySize; i++) {
		this->inventory[i] = NULL;
	}
}