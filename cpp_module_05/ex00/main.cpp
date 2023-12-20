#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// 객체 생성 테스트 (이름 없으면 생성 X)
		Bureaucrat bureau("hyungjup", 42);
		std::cout << bureau << std::endl;

		// 등급 증가
		bureau.incrementGrade();
		std::cout << bureau << std::endl;
	}
	catch
	{
		Bureaucrat
	}

	return 0;
}
