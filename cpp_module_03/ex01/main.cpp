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
    robot->attack("Target");
    robot->takeDamage(5);
    robot->beRepaired(5);
    delete robot;
    return 0;
}