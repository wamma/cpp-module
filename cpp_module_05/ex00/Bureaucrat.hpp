#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

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
		void incrementGrade();
		void decrementGrade();
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &value);

#endif