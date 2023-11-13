#include "ClapTrap.hpp"

int main() {
    ClapTrap robot1("Robot1");
    ClapTrap robot2("Robot2");

    robot1.attack("Target1");
    robot1.takeDamage(5);
    robot1.takeDamage(5);
    robot1.takeDamage(5);
    robot1.takeDamage(5);
    robot1.takeDamage(5);
    robot1.takeDamage(5);
    robot1.takeDamage(5);
    robot1.takeDamage(5);
    robot1.beRepaired(3);
    robot1.beRepaired(3);
    robot1.beRepaired(3);

    return 0;
}
