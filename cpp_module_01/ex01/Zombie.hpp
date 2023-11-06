#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void setName(const std::string& name);
		std::string getName(void) const;
};

Zombie*	zombieHorde( int N, std::string name );

#endif