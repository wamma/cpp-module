#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("hyungjup", 140);
		Form form("Application Form", 45, 30);

		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;

		// 충분한 직급의 관료와 함께 양식에 서명하기
		std::cout << "start to signForm funciton\n" << std::endl;
		form.signForm(bureaucrat);

		// 등급이 낮은 관료가 양식에 서명하려고 시도하는 경우
		Bureaucrat lowGradeBureaucrat("Low Grade Bureaucrat", 60);
		form.signForm(lowGradeBureaucrat);

		// 등급이 너무 높은 관료가 양식에 서명하려고 시도하는 경우
		Bureaucrat highGradeBureaucrat("High Grade Bureaucrat", -1);
		form.signForm(highGradeBureaucrat);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
