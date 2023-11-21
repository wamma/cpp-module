#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	FragTrap frag("Frag");

	clap.attack("target");
	scav.attack("target");
	frag.attack("target");

	ClapTrap* ptr = &frag;
	std::cout << "\n\n-----------ClapTrap ptr---------\n\n" << std::endl;
	ptr->attack("target"); // FragTrap::attack

	ptr = &scav;
	std::cout << "\n\n-----------ClapTrap ptr---------\n\n" << std::endl;
	ptr->attack("target"); // ScavTrap::attack

	std::cout << std::endl;
	return 0;
}