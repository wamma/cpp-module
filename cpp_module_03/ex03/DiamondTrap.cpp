#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), _name("Default") {
	_HitPoints = FragTrap::FragHitPoints;
	_EnergyPoints = ScavTrap::ScavEnergyPoints;
	_AttackDamage = FragTrap::FragAttackDamage;
	std::cout << "DiamondTrap 기본 생성자 호출" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	std::cout << "DiamondTrap " << _name << " has been created." << std::endl;
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
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	return *this;
}

void DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap's name is " << _name << std::endl;
	std::cout << "ClapTrap's name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::showStatus() const
{
	std::cout << "\n----------------------\n" << std::endl;
	std::cout << _name << "'s status" << std::endl;
	std::cout << "Hit Points: " << _HitPoints << std::endl;
	std::cout << "Energy Points: " << _EnergyPoints << std::endl;
	std::cout << "Attack Damage: " << _AttackDamage << std::endl;
	std::cout << "\n----------------------\n" << std::endl;
}