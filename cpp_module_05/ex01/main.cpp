#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("John Doe", 140);
		Form form("Application Form", 45, 30);

		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;

		// Signing the form with a bureaucrat of sufficient grade
		std::cout << "start to signForm funciton\n" << std::endl;
		form.signForm(bureaucrat);

		// Attempting to sign the form with a bureaucrat of insufficient grade
		Bureaucrat lowGradeBureaucrat("Low Grade Bureaucrat", 60);
		form.signForm(lowGradeBureaucrat);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
