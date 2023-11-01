#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = zombieHorde(5, "Zombie");
	delete [] zombie;
	return (0);
}