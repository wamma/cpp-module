#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {}

void Zombie::setName(std::string name) {
	this->name = name;
}

std::string Zombie::getName(void) const {
	return this->name;
}

void Zombie::announce(std::string name) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}