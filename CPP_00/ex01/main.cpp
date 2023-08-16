/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:23:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/16 12:21:34 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int add(PhoneBook &phoneBook, int &i, int &finish)
{
	std::string tmp;
	if (i > 7)
	{
		i = 0;
		finish = 1;
	}
	std::cout << "Please complete the following information :" << std::endl;
	std::cout << "First name : ";
	std::cin >> tmp;
	if (tmp.size() == 0)
		return 0;
	// return le tmp de ma fonction dedans
	phoneBook.list[i].firstName = tmp;
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
	return 1;
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

static int search(PhoneBook &phoneBook)
{
	std::cout << "   INDEX  |FIRST NAME| LAST NAME| NICKNAME " << std::endl;
	for (int i = 0; i < phoneBook.size; i++)
	{
		std::cout << std::setw(10) << i << "|";
		displaySearch(phoneBook.list[i].firstName, 1);
		displaySearch(phoneBook.list[i].lastName, 1);
		displaySearch(phoneBook.list[i].nickname, 0);
		std::cout << std::endl;
	}
	return 1;
}

int main(void)
{
	int i = 0;
	int work = 1;
	int finish = 0;
	std::string cmd;
	PhoneBook phoneBook;

	std::cout << "Please enter one of the following command : ADD, SEARCH or EXIT" << std::endl;
	while (cmd != "EXIT")
	{
		if (!work)
			break;
		if (cmd == "ADD")
			work = add(phoneBook, i, finish);
		if (cmd == "SEARCH")
			work = search(phoneBook);
		std::cin >> cmd;
	}
	return 0;
}