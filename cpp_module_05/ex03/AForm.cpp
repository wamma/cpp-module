#include "AForm.hpp"

AForm::AForm(std::string const name, int const signGrade, int const executeGrade) : name(name), signedStatus(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
	{
		throw AForm::GradeTooHighException();
	}
	else if (signGrade > 150 || executeGrade > 150)
	{
		throw AForm::GradeTooLowException();
	}
}

AForm::AForm(const AForm& other) : name(other.name), signedStatus(other.signedStatus), signGrade(other.signGrade), executeGrade(other.executeGrade) {}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
	{
		signedStatus = other.signedStatus;
	}
	return *this;
}

const std::string& AForm::getName() const
{
	return name;
}

bool AForm::getSignedStatus() const
{
	return signedStatus;
}

int AForm::getGradeToSign() const
{
	return signGrade;
}

int AForm::getGradeToExecute() const
{
	return executeGrade;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= signGrade)
	{
		signedStatus = true;
	}
	else if (bureaucrat.getGrade() > 150)
	{
		throw AForm::GradeTooLowException();
	}
	else if (bureaucrat.getGrade() < 1)
	{
		throw AForm::GradeTooHighException();
	}
}

std::ostream& operator<<(std::ostream &out, const AForm &form)
{
	out << form.getName() << ", form sign status: " << form.getSignedStatus() << ", sign grade required: " << form.getGradeToSign() << ", execution grade required: " << form.getGradeToExecute() << std::endl;
	return out;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "AForm: Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "AForm: Grade is too low!";
}