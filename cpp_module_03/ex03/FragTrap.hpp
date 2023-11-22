#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		static const int FragHitPoints = 100;
		static const int FragAttackDamage = 30;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		virtual ~FragTrap();
		FragTrap &operator=(FragTrap const &src);

		virtual void attack(std::string const &target);
		void highFivesGuys(void);
};

#endif