/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:23:07 by hyungjup          #+#    #+#             */
/*   Updated: 2023/06/14 16:04:35 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
}

void	Phonebook::add(void)
{
	if (this->index == 8)
		std::cout << "Phonebook is full" << std::endl;
	else
	{
		this->contacts[this->index].set();
		this->index++;
	}
}

void	Phonebook::search(void)
{
	int			i;
	std::string	index;

	if (this->index == 0)
		std::cout << "Phonebook is empty" << std::endl;
	else
	{
		std::cout << "     index|first name| last name|  nickname" << std::endl;
		i = 0;
		while (i < this->index)
		{
			this->contacts[i].print(i);
			i++;
		}
		std::cout << "Enter index: ";
		std::getline(std::cin, index);
		if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
			this->contacts[index[0] - '0'].print();
		else
			std::cout << "Invalid index" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Phonebook	phonebook;
	std::string	command;

	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}