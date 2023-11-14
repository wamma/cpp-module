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
	std::cout << "ScavTrap " << _Name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << "ScavTrap: Copy constructor called for " << _Name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _Name << " has been destoryed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	ClapTrap::operator=(other);
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _Name << " has entered Gate Keeper mode." << std::endl;
}