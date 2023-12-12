#include "Bureaucrat.hpp"

// int main()
// {
// 	// 객체 생성 테스트
// 	Bureaucrat bureau("hyungjup", 42);
// 	std::cout << bureau << std::endl;

// 	// 객체 등급 증가 테스트
// 	bureau.incrementGrade();
// 	std::cout << bureau << std::endl;

// 	// 객체 등급 감소 테스트
// 	bureau.decrementGrade();
// 	std::cout << bureau << std::endl;

// 	try
// 	{
// 		Bureaucrat invalidBureau("Invalid", 151);
// 	}
// 	catch (GradeTooHighException &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	catch (GradeTooLowException &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	catch (...)
// 	{
// 		std::cerr << "Unknown exception caught" << std::endl;
// 	}

// 	return 0;
// }
