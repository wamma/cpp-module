#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

# define FALSE		0
# define TRUE		1
# define ERROR		-1
# define MAX_NUM	8

class PhoneBook {
	private:
		Contact _contact[MAX_NUM];
		int _index;
		std::string formatName(std::string name) {
			if (name.length() > 10)
				return name.substr(0, 9) + ".";
			return name;
		}
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
};

#endif
