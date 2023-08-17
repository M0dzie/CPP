/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:21:47 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/17 11:38:46 by thmeyer          ###   ########.fr       */
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
	void setSize(int i);
	int getSize();
	Contact list[8];

	private:
	int size;
};

#endif