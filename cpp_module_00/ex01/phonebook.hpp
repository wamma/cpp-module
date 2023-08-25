#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
#include <iomanip>
# include "contact.hpp"

# define TRUE 1
# define FALSE 0
# define ERROR -1
# define MAX_CONTACTS 8

class PhoneBook {
	private:
		Contact 	contact[MAX_CONTACTS];
		int			index;
	public:
		PhoneBook();
		~PhoneBook();
		void		add();
		void		search();
		void		showContact(int index);
		void		print_with_format(std::string str);
};

#endif
