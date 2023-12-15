#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	// MateriaSource 및 Materia 객체 생성
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	// 캐릭터 생성
	Character *me = new Character("me");

	// Materia 생성 및 장착
	AMateria *tmp;

	tmp = src->createMateria("ice");
	if (tmp)
	{
		me->equip(tmp);
	}
	else
	{
		std::cout << "Failed to create ice materia." << std::endl;
	}

	tmp = src->createMateria("cure");
	if (tmp)
	{
		me->equip(tmp);
	}
	else
	{
		std::cout << "Failed to create cure materia." << std::endl;
	}

	me->unequip(0);

	// 없는 type의 Materia 생성
	// tmp = src->createMateria("fire");
	// if (tmp)
	// {
	// 	me->equip(tmp);
	// }
	// else
	// {
	// 	std::cout << "Failed to create fire materia." << std::endl;
	// }

	// 장착된 Materia의 타입 출력
	for (int i = 0; i < 4; ++i)
	{
		AMateria *materia = me->getMateriaType(i);
		if (materia)
		{
			std::cout << "Materia at index " << i << " has type: " << materia->getType() << std::endl;
		}
		else
		{
			std::cout << "No Materia equipped at index " << i << std::endl;
		}
	}

	// 다른 예제
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	// 메모리 정리
	delete bob;
	delete me;
	delete src;

	return 0;
}


// int main()
// {
// 	IMateriaSource *src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	Character *me = new Character("me");

// 	AMateria *tmp = src->createMateria("ice");
// 	me->equip(tmp);

// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter *bob = new Character("bob");

// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }
