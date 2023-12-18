#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

// int main() {
//     try {
//         // Bureaucrat 객체 생성
//         Bureaucrat hyungjup("Hyungjup", 42);
//         std::cout << hyungjup << std::endl;

//         // 폼 객체 생성
//         PresidentialPardonForm presidentialForm("Alice");
//         RobotomyRequestForm robotomyForm("Bob");
//         ShrubberyCreationForm shrubberyForm("Charlie");

//         // 폼 서명 및 실행 테스트
//         presidentialForm.signForm(hyungjup);
//         hyungjup.executeForm(presidentialForm);

//         robotomyForm.signForm(hyungjup);
//         hyungjup.executeForm(robotomyForm);

//         shrubberyForm.signForm(hyungjup);
//         hyungjup.executeForm(shrubberyForm);

//         // 등급 증가 및 감소 테스트
//         hyungjup.incrementGrade();
//         std::cout << hyungjup << std::endl;

//         hyungjup.decrementGrade();
//         std::cout << hyungjup << std::endl;
//     }
//     catch (GradeTooHighException &e) {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }
//     catch (GradeTooLowException &e) {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }
//     catch (std::exception &e) {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }

//     return 0;
// }

int main() {
    try {
        // Bureaucrat 객체 생성 (등급 설정)
        Bureaucrat hyungjup("Hyungjup", 42);
        std::cout << hyungjup << std::endl;

        // ShrubberyCreationForm 객체 생성
        ShrubberyCreationForm shrubberyForm("home");

        // Form 서명 (가정)
        shrubberyForm.signForm(hyungjup);

        // Form 실행
        hyungjup.executeForm(shrubberyForm);

    } catch (const GradeTooHighException& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (const GradeTooLowException& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
