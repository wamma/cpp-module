#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : oldestContactIndex(0){}

void PhoneBook::deleteEof() {
	if (std::cin.eof())
	{
		std::clearerr(stdin);
		std::cin.clear();
		std::cout << std::endl;
	}
}

void PhoneBook::addContact() {
	std::string input;
	Contact contact;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	deleteEof();
	if (input.empty()) {
		std::cout << "First name cannot be empty." << std::endl;
		return;
	}
	contact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	deleteEof();
	if (input.empty()) {
		std::cout << "Last name cannot be empty." << std::endl;
		return;
	}
	contact.setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	deleteEof();
	if (input.empty()) {
		std::cout << "Nickname cannot be empty." << std::endl;
		return;
	}
	contact.setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	deleteEof();
	if (input.empty()) {
		std::cout << "Phone number cannot be empty." << std::endl;
		return;
	}
	contact.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	deleteEof();
	if (input.empty()) {
		std::cout << "Darkest secret cannot be empty." << std::endl;
		return;
	}
	contact.setDarkestSecret(input);

	this->contacts[this->oldestContactIndex] = contact;
	this->oldestContactIndex = (this->oldestContactIndex + 1) % 8;
}

std::string PhoneBook::truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return str.substr(0, width - 1) + ".";
	return str;
}

Contact PhoneBook::getContact(int index) {
	if (index < 0 || index > 7)
		return Contact();
	return this->contacts[index];
}

void PhoneBook::searchContacts(PhoneBook &phoneBook)
{
	int index;
	Contact contact;
	std::string indexStr;
	std::stringstream ss;

	for (int i = 0; i < 8; ++i)
	{
		contact = phoneBook.getContact(i);
		std::cout << std::setw(10) << i << '|';
		std::cout << std::setw(10) << truncate(contact.getFirstName(), 10) << '|';
		std::cout << std::setw(10) << truncate(contact.getLastName(), 10) << '|';
		std::cout << std::setw(10) << truncate(contact.getNickname(), 10) << std::endl;
	}

	std::cout << "Enter index of contact to display: ";
	std::getline(std::cin, indexStr);
	deleteEof();
	ss << indexStr;
	ss >> index;
	if (ss.fail()) {
		std::cout << "Invalid Input. Please enter a number" << std::endl;
		return ;
	}
	if (index < 0 || index > 7)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}

	contact = phoneBook.getContact(index);
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}
