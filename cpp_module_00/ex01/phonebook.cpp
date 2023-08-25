#include "phonebook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	if (index >= MAX_CONTACTS)
	{
		for (int i = 1; i <= MAX_CONTACTS; i++)
			contact[i] = contact[i + 1];
		index--;
	}

	do {
		std::cout<<"Enter first name: ";
		std::cin>>firstName;

		std::cout<<"Enter last name: ";
		std::cin>>lastName;

		std::cout<<"Enter nickname: ";
		std::cin>>nickname;

		std::cout<<"Enter phone number: ";
		std::cin>>phoneNumber;

		std::cout<<"Enter darkest secret: ";
		std::cin>>darkestSecret;

		contact[index] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	} while(contact[index].isEmpty());
	index++;
}

void	PhoneBook::search()
{
	int			i;
	std::string	index;

	if (this->index == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	i = 0;
	while (i < this->index)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << contact[i].getFirstName() << "|";
		std::cout << std::setw(10) << contact[i].getLastName() << "|";
		std::cout << std::setw(10) << contact[i].getNickname() << "|" << std::endl;
		i++;
	}
	std::cout << "Enter index: ";
	std::cin >> index;
	if (index.length() != 1 || index[0] < '0' || index[0] > '7')
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	i = index[0] - '0';
	if (i >= this->index)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	showContact(i);
}

void	PhoneBook::print_with_format(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	PhoneBook::showContact(int index)
{
	std::cout<< std::setw(10) << index << "|";
	std::cout << "First name: " << contact[index].getFirstName() << std::endl;
	std::cout << "Last name: " << contact[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contact[index].getNickname() << std::endl;
	std::cout << "Phone number: " << contact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact[index].getDarkestSecret() << std::endl;
}
