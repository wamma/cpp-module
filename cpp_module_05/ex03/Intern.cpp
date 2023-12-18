#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return *this;
}

AForm *Intern::makeShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	typedef AForm *(Intern::*formCreator)(std::string);

	struct formPair
	{
		std::string name;
		formCreator creator;
	};

	formPair formList[3] =
	{
		{"shrubbery creation", &Intern::makeShrubberyCreationForm},
		{"robotomy request", &Intern::makeRobotomyRequestForm},
		{"presidential pardon", &Intern::makePresidentialPardonForm}
	};

	for (int i = 0; i < 3; ++i)
	{
		if (name == formList[i].name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*formList[i].creator)(target));
		}
	}
	std::cout << "Form name " << name << " is not recognized." << std::endl;
	return NULL;
}