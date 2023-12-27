#include "RobotomyRequestForm.hpp"

// RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), target(other.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		target = other.target;
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > getGradeToExecute())
	{
		throw GradeTooLowException();
	}
	std::cout << "Drilling noises!!!" << std::endl;
	if (rand() % 2)
	{
		std::cout << target << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << "Failed to robotomized " << target << std::endl;
	}
}