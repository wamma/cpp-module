#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// 객체 생성 테스트 (이름 없으면 생성 X)
		Bureaucrat bureau("hyungjup", 1);
		std::cout << bureau << std::endl;

		// 등급 증가
		bureau.incrementGrade();
		std::cout << bureau << std::endl;

		// 등급 감소
		bureau.decrementGrade();
		std::cout << bureau << std::endl;

		Bureaucrat highBureau("high", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	// catch (Bureaucrat::GradeTooHighException &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	return 0;
}
