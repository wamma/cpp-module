#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap " << _Name << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap: Copy constructor called for " << _Name << std::endl;
}