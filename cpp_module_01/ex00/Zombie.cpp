#include "Zombie.hpp"

Zombie::Zombie() : name(""){}

Zombie::~Zombie() {
	std::cout << this->name << " is dead" << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

std::string Zombie::getName(void) const {
	return this->name;
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}