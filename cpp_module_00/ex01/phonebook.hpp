#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <climits>
# include <sstream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int oldestContactIndex;

	public:
		PhoneBook();
		void addContact();
		Contact getContact(int index);
		void searchContacts(PhoneBook &phoneBook);

	private:
		std::string truncate(std::string str, size_t width);
		void deleteEof();
};

#endif