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
	AMateria *tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	// Materia의 타입 출력 예제
	for (int i = 0; i < 4; ++i)
	{
		AMateria *materia = me->getMateriaType(i);
		if (materia)
		{
			std::cout << "Materia at index " << i << " has type: " << materia->getType() << std::endl;
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