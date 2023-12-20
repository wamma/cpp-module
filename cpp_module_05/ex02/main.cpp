#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main() {
    try {
        // Bureaucrat 객체 생성
        Bureaucrat hyungjup("Hyungjup", 42);
        std::cout << hyungjup << std::endl;

        // 폼 객체 생성
        PresidentialPardonForm presidentialForm("Alice");
        RobotomyRequestForm robotomyForm("Bob");
        ShrubberyCreationForm shrubberyForm("Charlie");

        // 폼 서명 및 실행 테스트
        presidentialForm.signForm(hyungjup);
        hyungjup.executeForm(presidentialForm);

        robotomyForm.signForm(hyungjup);
        hyungjup.executeForm(robotomyForm);

        shrubberyForm.signForm(hyungjup);
        hyungjup.executeForm(shrubberyForm);

        // 등급 증가 및 감소 테스트
        hyungjup.incrementGrade();
        std::cout << hyungjup << std::endl;

        hyungjup.decrementGrade();
        std::cout << hyungjup << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}


// int main()
// {
// 	try
// 	{
// 		Bureaucrat hyungjup("Hyungjup", 42);
// 		std::cout << hyungjup << std::endl;

// 		PresidentialPardonForm presidentialForm("Alice");
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	}
// }