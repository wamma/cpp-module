#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool signedStatus;
		const int signGrade;
		const int executeGrade;
		Form();
	
	public:
		Form(const std::string name, const int signGrade, const int executeGrade);
		Form(const Form& other);
		~Form();
		Form& operator=(const Form& other);

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		const std::string& getName() const;
		bool getSignedStatus() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream &out, Form const &value);

#endif