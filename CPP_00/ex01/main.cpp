/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:23:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/15 23:30:56 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void add(PhoneBook &phoneBook, int &i)
{
	if (i > 7)
		i = 0;
	std::cout << "Please complete the following information :" << std::endl;
	std::cout << "First name : ";
	std::cin >> phoneBook.list[i].firstName;
	std::cout << "Last name : ";
	std::cin >> phoneBook.list[i].lastName;
	std::cout << "nickname : ";
	std::cin >> phoneBook.list[i].nickname;  
	std::cout << "Phone number : ";
	std::cin >> phoneBook.list[i].phoneNumber;
	std::cout << "Darkest secret : ";
	std::cin >> phoneBook.list[i].darkestSecret;
	std::cout << "\033[1;32mContact created ! ✓\033[0m" << std::endl;
	i += 1;
}

static void displaySearch(std::string contact, int margin, int pipe)
{
	if (contact.size() > 10)
	{
		std::cout << contact.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::setw(margin) << contact;
	if (pipe)
		std::cout << "|"; 
}

static void search(PhoneBook &phoneBook, int &i)
{
	for (int j = 0; j < i; j++)
	{
		std::cout << std::setw(9) << j << "|";
		displaySearch(phoneBook.list[j].firstName, 10 - phoneBook.list[j].firstName.size(), 1);
		displaySearch(phoneBook.list[j].lastName, 10 - phoneBook.list[j].lastName.size(), 1);
		displaySearch(phoneBook.list[j].nickname, 10 - phoneBook.list[j].nickname.size(), 0);
		std::cout << std::endl;
	}
}

int main(void)
{
	int i = 0;
	PhoneBook phoneBook;
	std::string cmd;

	std::cout << "Please enter one of the following command : ADD, SEARCH or EXIT" << std::endl;
	while (cmd != "EXIT")
	{
		if (cmd == "ADD")
			add(phoneBook, i);
		if (cmd == "SEARCH")
			search(phoneBook, i);
		std::cin >> cmd;
	}
	return 0;
}