#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool signedStatus;
		const int signGrade;
		const int executeGrade;
		AForm();
	
	public:
		AForm(const std::string name, const int signGrade, const int executeGrade);
		AForm(const AForm& other);
		virtual ~AForm();
		AForm& operator=(const AForm& other);

		const std::string& getName() const;
		bool getSignedStatus() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(const Bureaucrat& bureaucrat);
		void signForm(const Bureaucrat& Bureaucrat);

		virtual void execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream &out, AForm const &value);

#endif