#include "ClapTrap.hpp"

int main() {
	ClapTrap robot1("Robot1");
	ClapTrap robot2("Robot2");

	robot1.showStatus();
	robot1.takeDamage(5);
	robot1.showStatus();
	robot1.takeDamage(5);
	robot1.attack("Robot2");

	return 0;
}
