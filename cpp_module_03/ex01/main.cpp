#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Scav");
	ClapTrap clap("Clap");

	scav.attack("Target1");
	scav.showStatus();
	scav.takeDamage(50);
	scav.showStatus();
	scav.beRepaired(50);
	scav.showStatus();

	scav.guardGate();

	return 0;
}

// int main()
// {
// 	ClapTrap* robot = new ScavTrap("Robot"); // 업캐스팅
// 	ScavTrap robot2("Robot2");
// 	robot->showStatus();
// 	robot->takeDamage(100);
// 	robot->showStatus();
// 	robot->attack("Robot2");
// 	robot->showStatus();
// 	robot2.showStatus();

// 	robot->guardGate();
// 	delete robot;
// 	return 0;
// }

// int main()
// {
// 	ClapTrap* robot = new ScavTrap("Robot");
// 	ScavTrap robot2("Robot2");
// 	robot->showStatus();
// 	robot->takeDamage(100);
// 	robot->showStatus();
// 	robot->attack("Robot2");
// 	robot->showStatus();
// 	robot2.showStatus();

// 	ScavTrap* scav = dynamic_cast<ScavTrap*>(robot);// 다운 캐스팅
// 	if (scav)
// 	{
// 		scav->guardGate();
// 	}
// 	delete robot;
// 	return 0;
// }