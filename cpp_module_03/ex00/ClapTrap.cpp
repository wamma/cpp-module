#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("Default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap 기본 생성자 호출" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap " << _Name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "Copy constructor called for " << _Name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _Name << " has been destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	std::cout << "Copy assignment operator called for " << _Name << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->_EnergyPoints || !this->_HitPoints)
	{
		if (!this->_EnergyPoints)
			std::cout << "ClapTrap " << _Name << " is out of energy." << std::endl;
		else
			std::cout << "ClapTrap " << _Name << " is already died." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _HitPoints)
	{
		_HitPoints = 0;
	}
	else
	{
		_HitPoints -= amount;
	}
	if (!_EnergyPoints || !_HitPoints)
	{
		if (!_EnergyPoints)
			std::cout << "ClapTrap " << _Name << " is out of energy." << std::endl;
		else
			std::cout << "ClapTrap " << _Name << " is died." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _Name << " takes " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
		if (!_EnergyPoints || !_HitPoints)
		{
			if (!_EnergyPoints)
				std::cout << "ClapTrap " << _Name << " is out of energy." << std::endl;
			else
				std::cout << "ClapTrap " << _Name << "is died." << std::endl;
		}
		else
		{
			_HitPoints += amount;
			std::cout << "ClapTrap " << _Name << " is repaired for " << amount << " hit points." << std::endl;
			_EnergyPoints--;
		}
}

void ClapTrap::showStatus() const
{
	std::cout << "\n----------------------\n" << std::endl;
	std::cout << _Name << "'s status" << std::endl;
	std::cout << "Hit Points: " << _HitPoints << std::endl;
	std::cout << "Energy Points: " << _EnergyPoints << std::endl;
	std::cout << "Attack Damage: " << _AttackDamage << std::endl;
	std::cout << "\n----------------------\n" << std::endl;
}