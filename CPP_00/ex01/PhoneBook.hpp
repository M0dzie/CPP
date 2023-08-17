/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:21:47 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/17 13:04:02 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook();

	private:
	int _size;
	Contact _list[8];
	int _getSize() const;
	void _setSize(int i);
	void _phoneBookLoop();
	void _displaySearch(std::string display, int pipe);
	void _search();
	void _add(int &i, int &finish);
	std::string _getVar(std::string message);
};

#endif