#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), target(other.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		target = other.target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > getGradeToExecute())
	{
		throw GradeTooLowException();
	}
	std::ofstream ofs(target + "_shrubbery");
	if (!ofs)
	{
		std::cerr << "Error: Could not open file" << std::endl;
		return;
	}
	int height = 5;
	for (int i = 0; i < height - 1; ++i) // 나무의 상단 부분 그리기
	{
		for (int j = 0; j < height - i; ++j)
		{
			ofs << " ";
		}
		for (int j = 0; j < i * 2 + 1; ++j)
		{
			ofs << "*";
		}
		ofs << std::endl;
	}

	for (int i = 0; i < 2; ++i) // 나무의 줄기 부분 그리기 (높이 2)
	{
		for (int j = 0; j < height - 1; ++j) // 줄기의 위치를 나무 중앙에 맞춤
		{
			ofs << " ";
		}
		ofs << " |" << std::endl;
	}

	ofs.close();
}