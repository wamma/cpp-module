#include "contact.hpp"
#include "phonebook.hpp"


// phonebook에서 add, search
// contact에서 각각의 정보를 받아서 저장
int	main(void)
{
	std::string	command;
	PhoneBook	phonebook;

	std::cout<<"Welcome to the phonebook!"<<std::endl;
	std::cout<<"Available commands: ADD, SEARCH, EXIT"<<std::endl;
	while (TRUE)
	{
		std::cout << "Enter command: "<<std::endl;
		std::cin >> command;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}
