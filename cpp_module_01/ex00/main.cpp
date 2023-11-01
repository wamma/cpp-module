# include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("Zombie1");
	zombie->announce(zombie->getName());
	randomChump("Zombie2");
	delete zombie;
	return (0);
}