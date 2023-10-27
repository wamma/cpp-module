#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darksecret;

	public:
		Contact();
		~Contact();
		void setFirstName(std::string firstname);
		std::string getFirstName() const;

		void setLastName(std::string lastname);
		std::string getLastName() const;

		void setNickName(std::string nickname);
		std::string getNickName() const;

		void setPhoneNumber(std::string phonenumber);
		std::string getPhoneNumber() const;

		void setDarkScret(std::string darksecret);
		std::string getDarkScret() const;
};

#endif