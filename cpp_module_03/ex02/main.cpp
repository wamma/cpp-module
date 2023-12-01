#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	// 일반적인 테스트
	// std::cout << "====== 일반적인 테스트 ======" << std::endl;
	// FragTrap frag("Frag");
	// frag.showStatus();
	// frag.attack("Enemy");
	// frag.showStatus();
	// frag.takeDamage(50);
	// frag.showStatus();
	// frag.beRepaired(20);
	// frag.showStatus();
	// frag.highFivesGuys();

	// 잘 상속이 되었는지 테스트
	// std::cout << "\n====== 상속 테스트 ======" << std::endl;
	// ScavTrap scav("Scav");
	// scav.showStatus();
	// scav.attack("Enemy");
	// scav.showStatus();
	// scav.takeDamage(50);
	// scav.showStatus();
	// scav.beRepaired(20);
	// scav.showStatus();
	// scav.guardGate();

	// 업캐스팅 테스트
	std::cout << "\n====== 업캐스팅 테스트 ======" << std::endl;
	ClapTrap* upcastFrag = new FragTrap("UpcastFrag");
	upcastFrag->showStatus();
	upcastFrag->attack("Enemy");
	upcastFrag->showStatus();
	upcastFrag->takeDamage(50);
	upcastFrag->showStatus();
	upcastFrag->beRepaired(20);
	upcastFrag->showStatus();
	// upcastFrag->highFiveGuys();

	// 다운캐스팅 테스트
	std::cout << "\n====== 다운캐스팅 테스트 ======" << std::endl;
	FragTrap* downcastFrag = dynamic_cast<FragTrap*>(upcastFrag);
	if (downcastFrag) // 다운캐스팅이 성공했는지 확인
	{
		downcastFrag->highFivesGuys();
	}
	else
	{
		std::cout << "다운캐스팅 실패" << std::endl;
	}

	delete upcastFrag;

	return 0;
}
