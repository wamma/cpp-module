#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap(), _name("Default") {
	_HitPoints = FragTrap::_HitPoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap 기본 생성자 호출" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name), _name(name) {
	std::cout << "DiamondTrap " << _name << " has been created." << std::endl;
	ClapTrap::_Name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	*this = copy;
	std::cout << "Diamond: Copy constructor called for " << _name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Diamond " << _name << " has been destoryed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &other) {
	if (this != &other) {
		FragTrap::operator=(other);
		ScavTrap::operator=(other);
		this->_name = other._name;
	}
	return *this;
}

void DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap's name is " << _name << std::endl;
	std::cout << "ClapTrap's name is " << _Name << std::endl;
}