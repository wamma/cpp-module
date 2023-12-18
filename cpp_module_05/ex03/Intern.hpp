#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();
		Intern &operator=(const Intern &copy);
		AForm *makeForm(std::string name, std::string target);
		AForm *makeShrubberyCreationForm(std::string target);
		AForm *makeRobotomyRequestForm(std::string target);
		AForm *makePresidentialPardonForm(std::string target);
};

# endif