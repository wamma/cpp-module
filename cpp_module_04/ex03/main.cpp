#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	AMateria *ice = new Ice();
	AMateria *cure = new Cure();

	src->learnMateria(ice);
	src->learnMateria(cure);

	Character* player = new Character("player");

	player->equip(src->createMateria("ice"));
	player->equip(src->createMateria("cure"));

	std::cout << "Using Materia" << std::endl;
	player->use(0, *player); // Use Ice Materia
	player->use(1, *player); // Use Cure Materia

	player->unequip(0);

	delete ice;
	delete cure;
	delete src;
	delete player;

	return 0;
}

// int main()
// {
// 	Character* me = new Character("me");

// 	me->getName();
// 	me->use(0, *me);
// }