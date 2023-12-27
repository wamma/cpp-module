#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat hyungjup("hyungjup", 42);
		Form application("application", 40, 30);

		std::cout << hyungjup << std::endl;
		std::cout << application << std::endl;

		hyungjup.signForm(application);

		Bureaucrat lowGradeBureaucrat("lowGradeBureaucrat", 60);
		lowGradeBureaucrat.signForm(application);

		Bureaucrat highGradeBureaucrat("highGradeBureaucrat", 20);
		highGradeBureaucrat.signForm(application);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
