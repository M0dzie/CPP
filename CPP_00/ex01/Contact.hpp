/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:35:21 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/16 19:44:43 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class Contact
{
	public:
	Contact();
	void setFirstName(std::string var) {
		firstName = var;
	}
	std::string getFirstName() {
		return firstName;
	}
	void setLastName(std::string var) {
		lastName = var;
	}
	std::string getLastName() {
		return lastName;
	}
	void setNickname(std::string var) {
		nickname = var;
	}
	std::string getNickname() {
		return nickname;
	}
	void setPhoneNumber(std::string var) {
		phoneNumber = var;
	}
	std::string getPhoneNumber() {
		return phoneNumber;
	}
	void setDarkestSecret(std::string var) {
		darkestSecret = var;
	}
	std::string getDarkestSecret() {
		return darkestSecret;
	}

	private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

#endif