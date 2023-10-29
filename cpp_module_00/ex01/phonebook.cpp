#include "phonebook.hpp"

PhoneBook::PhoneBook() : oldestContactIndex(0) {}

void PhoneBook::addContact(Contact contact) {
    this->contacts[this->oldestContactIndex] = contact;
    this->oldestContactIndex = (this->oldestContactIndex + 1) % 8;
}

Contact PhoneBook::getContact(int index) {
    if (index < 0 || index > 7)
        return Contact();
    return this->contacts[index];
}

int PhoneBook::getOldestContactIndex() {
    return this->oldestContactIndex;
}
