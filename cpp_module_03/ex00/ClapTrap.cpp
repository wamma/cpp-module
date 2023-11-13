#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	// std::cout << "ClapTrap " << _Name << "has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
	// std::cout << "Copy constructor called for " << _Name << std::endl;
}

ClapTrap::~ClapTrap() {
	// std::cout << "ClapTrap " << _Name << "has been destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->_Name = other._Name;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	// std::cout << "Copy assignment operator called for " << _Name << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_EnergyPoints > 0) {
		std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
	else {
		std::cout << "Not enough Energy Points" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	_HitPoints -= amount;
	std::cout << "ClapTrap " << _Name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
		if (_EnergyPoints > 0) {
			std::cout << "ClapTrap " << _Name << " is repaired for " << amount << " hit points." << std::endl;
			_EnergyPoints--;
		}
		else {
			std::cout << "Not enough Energy Points for repaired." << std::endl;
		}
}