#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		static const int ScavEnergyPoints = 50;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		virtual ~ScavTrap();
		ScavTrap& operator=(const ScavTrap& other);

		virtual void attack(const std::string& target);
		void guardGate();
};

#endif
