#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

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

		const std::string& getName() const;
		bool getSignedStatus() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(const Bureaucrat& bureaucrat);
		void signForm(const Bureaucrat& Bureaucrat);
};

std::ostream& operator<<(std::ostream &out, Form const &value);

#endif