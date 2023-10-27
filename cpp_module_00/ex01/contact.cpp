#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(std::string firstname) {
	_firstname = firstname;
}

std::string Contact::getFirstName() const {
	return _firstname;
}

void Contact::setLastName(std::string lastname) {
	_lastname = lastname;
}

std::string Contact::getLastName() const {
	return _lastname;
}

void Contact::setNickName(std::string nickname) {
	_nickname = nickname;
}

std::string Contact::getNickName() const {
	return _nickname;
}

void Contact::setPhoneNumber(std::string phonenumber) {
	_phonenumber = phonenumber;
}

std::string Contact::getPhoneNumber() const {
	return _phonenumber;
}

void Contact::setDarkScret(std::string darksecret) {
	_darksecret = darksecret;
}

std::string Contact::getDarkScret() const {
	return _darksecret;
}