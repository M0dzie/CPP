/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:21:47 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/17 15:22:15 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();

private:
	int _size;
	Contact _list[8];
	
	int _getSize() const;
	int _displayIndex(std::string display);
	std::string _getVar(std::string message);
	void _setSize(int i);
	void _phoneBookLoop();
	void _displaySearch(std::string display);
	void _search();
	void _add(int &i, int &finish);
};

#endif