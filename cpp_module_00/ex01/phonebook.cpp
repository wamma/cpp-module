#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : _index(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::add() {
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darksecret;

	if (_index > 7)
		_index = 0;
	std::cout << "type firstname" << std::endl;
	std::cin >> firstname;
	std::cout << "type lastname" << std::endl;
	std::cin >> lastname;
	std::cout << "type nickname" << std::endl;
	std::cin >> nickname;
	std::cout << "type phonenumber" << std::endl;
	std::cin >> phonenumber;
	std::cout << "type darksecret" << std::endl;
	std::cin >> darksecret;
	_contact[_index].setFirstName(firstname);
	_contact[_index].setLastName(lastname);
	_contact[_index].setNickName(nickname);
	_contact[_index].setPhoneNumber(phonenumber);
	_contact[_index].setDarkScret(darksecret);
	++_index;
}

void PhoneBook::search() {
	int index = 0;

	if (_index == 0) {
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	std::cout << "     index|first name|last name|nickname|" << std::endl;
	while (index < _index)
	{
		std::cout << "     " << index << "    |" 
				<< formatName(_contact[index].getFirstName().substr(0, 10)) << "|"
				<< formatName(_contact[index].getLastName().substr(0, 10)) << "|"
				<< formatName(_contact[index].getNickName().substr(0, 10)) << "|" << std::endl;
		++index;
	}
}