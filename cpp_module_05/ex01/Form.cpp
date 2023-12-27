#include "Form.hpp"

Form::Form(std::string const name, int const signGrade, int const executeGrade) : name(name), signedStatus(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (signGrade > 150 || executeGrade > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form& other) : name(other.name), signedStatus(other.signedStatus), signGrade(other.signGrade), executeGrade(other.executeGrade) {}

Form::~Form() {}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
	{
		signedStatus = other.signedStatus;
	}
	return *this;
}

const std::string& Form::getName() const
{
	return name;
}

bool Form::getSignedStatus() const
{
	return signedStatus;
}

int Form::getGradeToSign() const
{
	return signGrade;
}

int Form::getGradeToExecute() const
{
	return executeGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > signGrade)
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		signedStatus = true;
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form: Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form: Grade is too low!";
}

std::ostream& operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << ", form sign status: " << form.getSignedStatus() << ", sign grade required: " << form.getGradeToSign() << ", execution grade required: " << form.getGradeToExecute() << std::endl;
	return out;
}
