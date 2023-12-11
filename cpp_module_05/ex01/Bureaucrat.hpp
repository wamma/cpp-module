#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
		Bureaucrat();

	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& other);
		const std::string &getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &value);

#endif