#include "ScavTrap.hpp"

// int main() {
//     ScavTrap robot1("Robot1");
//     ScavTrap robot2("Robot2");

//     robot1.attack("Target1");
//     // robot1.takeDamage(5);
//     // robot1.takeDamage(5);
//     // robot1.takeDamage(5);
//     // robot1.takeDamage(5);
//     // robot1.takeDamage(5);
//     // robot1.takeDamage(5);
//     // robot1.takeDamage(5);
//     // robot1.takeDamage(5);
//     // robot1.takeDamage(5);
//     // robot1.takeDamage(5);
//     // robot1.takeDamage(5);
//     robot1.takeDamage(5);
//     robot1.guardGate();

//     return 0;
// }

int main()
{
	ClapTrap* robot = new ScavTrap("Robot");
	ScavTrap robot2("Robot2");
	robot->showStatus();
	robot->takeDamage(100);
	robot->showStatus();
	robot->attack("Robot2");
	robot->showStatus();
	robot2.showStatus();
	delete robot;
	return 0;
}
