/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:41:35 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/17 18:10:37 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _size(0)
{
	_phoneBookLoop();
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
		_size = i + 1;
	i += 1;
}

void PhoneBook::_displaySearch(std::string display)
{
	if (display.size() > 10)
	{
		std::cout << display.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << display;
	std::cout << "|"; 
}

int PhoneBook::_displayIndex(std::string index)
{
	for (int i = 0; index[i]; i++)
		if (!std::isdigit(index[i]) || index.size() > 1)
			return 0;
	int indexInt = std::atoi(index.c_str());
	if (indexInt >= 0 && indexInt < _size)
	{
		std::cout << "First name : " << _list[indexInt].getFirstName() << std::endl;
		std::cout << "Last name : " << _list[indexInt].getLastName() << std::endl;
		std::cout << "Nickname : " << _list[indexInt].getNickname() << std::endl;
		std::cout << "Phone number : " << _list[indexInt].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret : " << _list[indexInt].getDarkestSecret() << std::endl;
		return 1;
	}
	return 0;
}

void PhoneBook::_search()
{
	std::cout << " ------------------------------------------- " << std::endl;
	std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
	std::cout << " ------------------------------------------- " << std::endl;
	for (int j = 0; j < _size; j++)
	{
		std::cout << "|" << std::setw(10) << j << "|";
		_displaySearch(_list[j].getFirstName());
		_displaySearch(_list[j].getLastName());
		_displaySearch(_list[j].getNickname());
		std::cout << std::endl << " ------------------------------------------- " << std::endl;
	}
	if (_size == 0)
		std::cout << "The PhoneBook is empty" << std::endl;
	else
	{
		std::string index = _getVar("Please enter the index to display contact information : ");
		if (!_displayIndex(index))
			std::cout << "Please enter a correct index [0-" << _size - 1 << "]" << std::endl;
	}
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