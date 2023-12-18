#include "Bureaucrat.hpp"
#include "Intern.hpp"

// int main() {
//     try {
//         // Bureaucrat 객체 생성
//         Bureaucrat hyungjup("Hyungjup", 42);
//         std::cout << hyungjup << std::endl;

//         // Intern 객체 생성
//         Intern intern;

//         // Intern을 통해 폼 생성
//         AForm *form1 = intern.makeForm("shrubbery creation", "home");
//         AForm *form2 = intern.makeForm("robotomy request", "Bob");
//         AForm *form3 = intern.makeForm("presidential pardon", "Alice");

//         // 폼 서명 및 실행
//         if (form1) {
//             form1->signForm(hyungjup);
//             hyungjup.executeForm(*form1);
//             delete form1;
//         }
//         if (form2) {
//             form2->signForm(hyungjup);
//             hyungjup.executeForm(*form2);
//             delete form2;
//         }
//         if (form3) {
//             form3->signForm(hyungjup);
//             hyungjup.executeForm(*form3);
//             delete form3;
//         }
//     }
//     catch (std::exception &e) {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }

//     return 0;
// }

int main()
{
	Intern someRandomIntern;
	AForm* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}