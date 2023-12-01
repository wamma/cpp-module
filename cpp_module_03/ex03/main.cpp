#include "DiamondTrap.hpp"

int main()
{
	//테스트 케이스 1: 기본 생성자를 사용하여 객체 생성
	DiamondTrap dia1;
	dia1.showStatus();
	dia1.attack("robot1");
	dia1.showStatus();
	dia1.whoAmI();
	// 테스트 케이스 2: 이름을 인자로 받는 생성자를 사용하여 객체 생성
	DiamondTrap dia2("test2");
	dia2.attack("robot2");
	dia1.showStatus();
	dia2.whoAmI();
	std::cout << "\n-----------\n" << std::endl;
	// 테스트 케이스 3: 객체 복사
	DiamondTrap dia3 = dia2;
	std::cout << "\n-----------\n" << std::endl;
	dia3.whoAmI();
	// 테스트 케이스 4: 객체의 손상 및 수리
	dia2.takeDamage(5);
	dia1.showStatus();
	dia2.beRepaired(5);
	dia1.showStatus();
	// 테스트 케이스 5: FragTrap 과 ScavTrap의 고유한 메서드 사용
	FragTrap frag("frag");
	frag.highFivesGuys();
	ScavTrap scav("scav");
	scav.guardGate();

	return 0;
}

// int main()
// {
// 	// 업캐스팅 테스트
// 	DiamondTrap diamondTrap("MyDiamondTrap");
// 	ClapTrap* clapTrapPtr = &diamondTrap;
// 	clapTrapPtr->attack("enemy1");

// 	std::cout << std::endl;
// 	// 다운캐스팅 테스트
// 	ClapTrap clapTrap("MyClapTrap");
// 	ClapTrap* clapTrapPtr2 = &clapTrap;
// 	DiamondTrap* diamondTrapPtr = dynamic_cast<DiamondTrap*>(clapTrapPtr2);

// 	if (diamondTrapPtr) {
// 		diamondTrapPtr->attack("enemy2");
// 		diamondTrapPtr->whoAmI();
// 	} else {
// 		std::cout << "Downcasting failed." << std::endl;
// 	}
// 	return 0;
// }
