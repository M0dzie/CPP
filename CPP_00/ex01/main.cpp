/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:23:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/15 20:01:43 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

static void add(PhoneBook &phoneBook, int *i)
{
	(void)phoneBook;
	(void)i;
	Contact newContact;
	
	// phoneBook.book[*i] = newContact;
}

static void search(std::string cmd)
{
	std::cout << "you " << cmd << " sthg" << std::endl;
}

int main(int argc, char **argv)
{
	(void)argv;
	int i = 0;
	PhoneBook phoneBook;
	std::string cmd;

	if (argc != 1)
		return (std::cout << "Error" << std::endl << "Wrong function call !" << std::endl, 1);
	std::cout << "Please enter one of the following command : ADD, SEARCH or EXIT" << std::endl;
	while (cmd != "EXIT")
	{
		if (cmd == "ADD")
			add(phoneBook, &i);
		if (cmd == "SEARCH")
			search(cmd);
		std::cin >> cmd;
	}
	return 0;
}