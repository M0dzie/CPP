/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:41:35 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/22 13:24:33 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _size(0)
{
	this->_phoneBookLoop();
}

std::string PhoneBook::_getVar(std::string message)
{
	std::string var;

	while (var.empty() && !std::cin.eof())
	{
		std::cout << message;
		getline(std::cin, var);
		if (std::cin.eof())
			std::exit(1);
		if (var.empty())
			std::cout << "A contact can't have empty field" << std::endl;
	}
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
	this->_list[i].setFirstName(this->_getVar("First name : "));
	this->_list[i].setLastName(this->_getVar("Last name : "));
	this->_list[i].setNickname(this->_getVar("Nickname : "));
	this->_list[i].setPhoneNumber(this->_getVar("Phone number : "));
	this->_list[i].setDarkestSecret(this->_getVar("Your darkest secret : "));
	std::cout << "\033[1;32mContact created ! ✓\033[0m" << std::endl;
	if (!finish)
		this->_size = i + 1;
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
	if (indexInt >= 0 && indexInt < this->_size)
	{
		std::cout << "First name : " << this->_list[indexInt].getFirstName() << std::endl;
		std::cout << "Last name : " << this->_list[indexInt].getLastName() << std::endl;
		std::cout << "Nickname : " << this->_list[indexInt].getNickname() << std::endl;
		std::cout << "Phone number : " << this->_list[indexInt].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret : " << this->_list[indexInt].getDarkestSecret() << std::endl;
		return 1;
	}
	return 0;
}

void PhoneBook::_search()
{
	std::cout << " ------------------------------------------- " << std::endl;
	std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
	std::cout << " ------------------------------------------- " << std::endl;
	for (int j = 0; j < this->_size; j++)
	{
		std::cout << "|" << std::setw(10) << j << "|";
		this->_displaySearch(this->_list[j].getFirstName());
		this->_displaySearch(this->_list[j].getLastName());
		this->_displaySearch(this->_list[j].getNickname());
		std::cout << std::endl << " ------------------------------------------- " << std::endl;
	}
	if (this->_size == 0)
		std::cout << "The PhoneBook is empty" << std::endl;
	else
	{
		std::string index = this->_getVar("Please enter the index to display contact information : ");
		if (!this->_displayIndex(index))
			std::cout << "Please enter a correct index [0-" << this->_size - 1 << "]" << std::endl;
	}
}

void PhoneBook::_phoneBookLoop()
{
	int i = 0;
	int finish = 0;
	std::string cmd;
	
	std::cout << "Please enter one of the following command : ADD, SEARCH or EXIT" << std::endl;
	while (cmd != "EXIT" && !std::cin.eof())
	{
		getline(std::cin, cmd);
		if (cmd == "ADD")
			this->_add(i, finish);
		else if (cmd == "SEARCH")
			this->_search();
	}
}