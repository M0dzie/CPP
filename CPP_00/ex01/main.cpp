/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:23:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/17 11:19:13 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static std::string getVar(std::string type)
{
	std::string var;

	std::cout << type;
	std::cin >> var;
	return var;
}

static void add(PhoneBook &phoneBook, int &i, int &finish)
{
	if (i > 7)
	{
		i = 0;
		finish = 1;
	}
	std::cout << "Please complete the following information :" << std::endl;
	phoneBook.list[i].setFirstName(getVar("First name : "));
	phoneBook.list[i].setLastName(getVar("Last name : "));
	phoneBook.list[i].setNickname(getVar("Nickname : "));
	phoneBook.list[i].setPhoneNumber(getVar("Phone number : "));
	phoneBook.list[i].setDarkestSecret(getVar("Your darkest secret : "));
	std::cout << "\033[1;32mContact created ! ✓\033[0m" << std::endl;
	if (!finish)
		phoneBook.setSize(i + 1);
	i += 1;
}

static void displaySearch(std::string display, int pipe)
{
	if (display.size() > 10)
	{
		std::cout << display.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << display;
	if (pipe)
		std::cout << "|"; 
}

// static void displayChoice()
// {
// }

static void search(PhoneBook &phoneBook)
{
	std::cout << "   INDEX  |FIRST NAME| LAST NAME| NICKNAME " << std::endl;
	for (int i = 0; i < phoneBook.getSize(); i++)
	{
		std::cout << std::setw(10) << i << "|";
		displaySearch(phoneBook.list[i].getFirstName(), 1);
		displaySearch(phoneBook.list[i].getLastName(), 1);
		displaySearch(phoneBook.list[i].getNickname(), 0);
		std::cout << std::endl;
	}
	std::cout << std::endl << "Please enter the index to display contact information : ";
}

int main(void)
{
	int i = 0;
	int finish = 0;
	std::string cmd;
	PhoneBook phoneBook;

	std::cout << "Please enter one of the following command : ADD, SEARCH or EXIT" << std::endl;
	while (cmd != "EXIT")
	{
		if (std::cin.eof())
			break;
		if (cmd == "ADD")
			add(phoneBook, i, finish);
		if (cmd == "SEARCH")
			search(phoneBook);
		std::cin >> cmd;
	}
	return 0;
}