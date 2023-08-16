/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:21:47 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/16 19:55:30 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook();
	void setSize(int i) {
		size = i;
	}
	int getSize() {
		return size;
	}
	Contact list[8];

	private:
	int size;
};

#endif