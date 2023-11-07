#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;
	int N = 5;

	zombie = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++) {
		zombie[i].announce();
	}
	delete[] zombie;
	return (0);
}