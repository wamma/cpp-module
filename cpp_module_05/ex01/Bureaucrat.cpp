#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	if (this != &other)
	{
		*this = other;
	}
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		grade = other.grade;
	}
	return *this;
}

const std::string &Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade <= 1)
	{
		throw GradeTooHighException();
	}
	else
	{
		--grade;
	}
}

void Bureaucrat::decrementGrade()
{
	if (grade >= 150)
	{
		throw GradeTooLowException();
	}
	else
	{
		++grade;
	}
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &value)
{
	out << value.getName() << ", bureaucrat grade " << value.getGrade() << std::endl;
	return out;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat: Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat: Grade is too low!";
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << name << " couldn't sign " << name << " because " << e.what() << std::endl;
	}
}