#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int oldestContactIndex;

    public:
        PhoneBook();
        void addContact(Contact contact);
        Contact getContact(int index);
        int getOldestContactIndex();
};

#endif
