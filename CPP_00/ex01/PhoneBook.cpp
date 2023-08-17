/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:41:35 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/17 13:05:10 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _size(0)
{
	_phoneBookLoop();
}

void PhoneBook::_setSize(int i)
{
	_size = i;
}

int PhoneBook::_getSize() const
{
	return _size;
}

std::string PhoneBook::_getVar(std::string message)
{
	std::string var;

	std::cout << message;
	std::cin >> var;
	if (std::cin.eof())
		std::exit(1);
	return var;
}

void PhoneBook::_add(int &i, int &finish)
{
	if (i > 7)
	{
		i = 0;
		finish = 1;
	}
	std::cout << "Please complete the following information :" << std::endl;
	_list[i].setFirstName(_getVar("First name : "));
	_list[i].setLastName(_getVar("Last name : "));
	_list[i].setNickname(_getVar("Nickname : "));
	_list[i].setPhoneNumber(_getVar("Phone number : "));
	_list[i].setDarkestSecret(_getVar("Your darkest secret : "));
	std::cout << "\033[1;32mContact created ! ✓\033[0m" << std::endl;
	if (!finish)
		_setSize(i + 1);
	i += 1;
}

void PhoneBook::_displaySearch(std::string display, int pipe)
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

void PhoneBook::_search()
{
	std::cout << "   INDEX  |FIRST NAME| LAST NAME| NICKNAME " << std::endl;
	for (int i = 0; i < _getSize(); i++)
	{
		std::cout << std::setw(10) << i << "|";
		_displaySearch(_list[i].getFirstName(), 1);
		_displaySearch(_list[i].getLastName(), 1);
		_displaySearch(_list[i].getNickname(), 0);
		std::cout << std::endl;
	}
	std::cout << std::endl << "Please enter the index to display contact information : ";
}

void PhoneBook::_phoneBookLoop()
{
	int i = 0;
	int finish = 0;
	std::string cmd;
	
	std::cout << "Please enter one of the following command : ADD, SEARCH or EXIT" << std::endl;
	while (cmd != "EXIT")
	{
		if (std::cin.eof())
			break;
		if (cmd == "ADD")
			_add(i, finish);
		if (cmd == "SEARCH")
			_search();
		std::cin >> cmd;
	}
}