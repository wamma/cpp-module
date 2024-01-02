#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _HitPoints;
		unsigned int _EnergyPoints;
		unsigned int _AttackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		virtual ~ClapTrap();
		ClapTrap& operator=(const ClapTrap& other);
		virtual void attack(const std::string& target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
		virtual void showStatus() const;
};

#endif