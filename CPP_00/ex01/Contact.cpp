/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:31:57 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/17 12:13:29 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string var)
{
	_firstName = var;
}

void Contact::setLastName(std::string var)
{
	_lastName = var;
}

void Contact::setNickname(std::string var)
{
	_nickname = var;
}

void Contact::setPhoneNumber(std::string var)
{
	_phoneNumber = var;
}

void Contact::setDarkestSecret(std::string var)
{
	_darkestSecret = var;
}

std::string Contact::getFirstName() const
{
	return _firstName;
}

std::string Contact::getLastName() const
{
	return _lastName;
}

std::string Contact::getNickname() const
{
	return _nickname;
}

std::string Contact::getPhoneNumber() const
{
	return _phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return _darkestSecret;
}