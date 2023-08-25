#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		Contact(); // 기본 생성자
		~Contact(); // 소멸자
		Contact(std::string firstname, std::string lastname, \
		std::string nickname, std::string phonenumber, std::string darkestsecret); // 생성자

		bool		isEmpty(); // 비어있는지 확인
		std::string	getFirstName(); // firstName getter
		std::string	getLastName(); // lastName getter
		std::string	getNickname(); // nickname getter
		std::string	getPhoneNumber(); // phoneNumber getter
		std::string	getDarkestSecret(); // darkestSecret getter
};
#endif