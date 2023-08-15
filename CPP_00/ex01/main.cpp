/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:23:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/16 00:13:23 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void add(PhoneBook &phoneBook, int &i, int &finish)
{
	if (i > 7)
	{
		i = 0;
		finish = 1;
	}
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
	if (!finish)
		phoneBook.size = i + 1;
	i += 1;
}

static void displaySearch(std::string display, int margin, int pipe)
{
	if (margin < 0)
		margin *= -1;
	if (display.size() > 10)
	{
		std::cout << display.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::setw(margin) << display;
	if (pipe)
		std::cout << "|"; 
}

static void search(PhoneBook &phoneBook)
{
	std::cout << "   INDEX  |FIRST NAME| LAST NAME| NICKNAME " << std::endl;
	for (int i = 0; i < phoneBook.size; i++)
	{
		std::cout << std::setw(9) << i << "|";
		displaySearch(phoneBook.list[i].firstName, 10 - phoneBook.list[i].firstName.size(), 1);
		displaySearch(phoneBook.list[i].lastName, 10 - phoneBook.list[i].lastName.size(), 1);
		displaySearch(phoneBook.list[i].nickname, 10 - phoneBook.list[i].nickname.size(), 0);
		std::cout << std::endl;
	}
}

int main(void)
{
	int i = 0;
	int finish = 0;
	PhoneBook phoneBook;
	std::string cmd;

	std::cout << "Please enter one of the following command : ADD, SEARCH or EXIT" << std::endl;
	while (cmd != "EXIT")
	{
		if (cmd == "ADD")
			add(phoneBook, i, finish);
		if (cmd == "SEARCH")
			search(phoneBook);
		std::cin >> cmd;
	}
	return 0;
}