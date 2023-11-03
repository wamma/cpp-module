# include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("Zombie1");
	zombie->announce();
	randomChump("Zombie2");
	delete zombie;
	return (0);
}