#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap 기본 생성자 호출" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap " << _name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << "ScavTrap: Copy constructor called for " << _name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " has been destoryed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	ClapTrap::operator=(other);
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (!this->_EnergyPoints || !this->_HitPoints) {
		if (!this->_EnergyPoints)
			std::cout << "ScavTrap " << _name << " is out of energy." << std::endl;
		else
			std::cout << "ScavTrap " << _name << " is already dead." << std::endl;
	}
	else {
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " has entered Gate Keeper mode." << std::endl;
}
