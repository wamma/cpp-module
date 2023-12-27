#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		srand(time(NULL));
		// Bureaucrat 객체 생성
		Bureaucrat hyungjup("Hyungjup", 1); // 최상위 등급
		std::cout << hyungjup << std::endl;

		// Intern 객체 생성
		Intern intern;

		// 폼 생성
		AForm* shrubberyForm = intern.makeForm("shrubbery creation", "Gunjkim");
		AForm* robotomyForm = intern.makeForm("robotomy request", "Eoh");
		AForm* pardonForm = intern.makeForm("presidential pardon", "Jaehejun");

		// 폼 서명 및 실행
		if (shrubberyForm)
		{
			shrubberyForm->beSigned(hyungjup);
			hyungjup.executeForm(*shrubberyForm);
			// delete shrubberyForm; // 동적 할당 해제
		}
		if (robotomyForm)
		{
			robotomyForm->beSigned(hyungjup);
			hyungjup.executeForm(*robotomyForm);
			// delete robotomyForm;
		}
		if (pardonForm)
		{
			pardonForm->beSigned(hyungjup);
			hyungjup.executeForm(*pardonForm);
			// delete pardonForm;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}

// int main()
// {
// 	Intern someRandomIntern;
// 	AForm* rrf;

// 	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
// }
