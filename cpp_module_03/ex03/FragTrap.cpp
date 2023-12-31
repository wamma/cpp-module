#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap 기본 생성자 호출" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap " << _name << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap: Copy constructor called for " << _name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " has been destoryed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	ClapTrap::operator=(other);
	return *this;
}

void FragTrap::attack(std::string const &target) {
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " wants to high five!" << std::endl;
}