#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	std::cout << "Please type command: ADD, SEARCH, EXIT"<<std::endl;
	while (TRUE)
	{
		std::cout << "Enter Command: " << std::endl;
		std::cin >> command;
		if (command  == "EXIT")
			break;
		else if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else
			std::cout << "Wrong Command!!" << std::endl;
	}
	return 0;
}
