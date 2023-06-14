/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:01:33 by hyungjup          #+#    #+#             */
/*   Updated: 2023/06/14 22:55:03 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		void set() {
			std::cout << "Enter first name: ";
			std::getline(std::cin, this->first_name);

			std::cout << "Enter last name: ";
			std::getline(std::cin, this->last_name);

			std::cout << "Enter nickname: ";
			std::getline(std::cin, this->nickname);
		}

		void print(int index) {
			
		}
};

#endif