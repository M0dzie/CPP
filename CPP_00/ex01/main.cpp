/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:23:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/15 21:43:42 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

static void add(PhoneBook *phoneBook, int *i)
{
	if (*i > 7)
		*i = 0;
	std::cout << "Please complete the following information :" << std::endl;
	std::cout << "First name : ";
	std::cin >> phoneBook->list[*i].firstName;
	std::cout << "Last name : ";
	std::cin >> phoneBook->list[*i].lastName;
	std::cout << "nickname : ";
	std::cin >> phoneBook->list[*i].nickName;  
	std::cout << "Phone number : ";
	std::cin >> phoneBook->list[*i].phoneNumber;
	std::cout << "Darkest secret : ";
	std::cin >> phoneBook->list[*i].darkestSecret;
	std::cout << "\033[1;32mContact created ! ✓\033[0m" << std::endl;
	*i += 1;
}

static void search(PhoneBook *phoneBook, int *i)
{
	(void)phoneBook;
	(void)i;
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
			add(&phoneBook, &i);
		if (cmd == "SEARCH")
			search(&phoneBook, &i);
		std::cin >> cmd;
	}
	return 0;
}