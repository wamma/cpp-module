#include "contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

Contact::Contact(std::string firstname, std::string lastname, \
std::string nickname, std::string phonenumber, std::string darkestsecret)
{
	this->firstName = firstname;
	this->lastName = lastname;
	this->nickname = nickname;
	this->phoneNumber = phonenumber;
	this->darkestSecret = darkestsecret;
}

bool	Contact::isEmpty()
{
	return (this->firstName.empty() || this->lastName.empty() || this->nickname.empty() || this->phoneNumber.empty() || this->darkestSecret.empty());
}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}
