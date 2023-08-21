/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:31:57 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/21 13:24:18 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string var)
{
	this->_firstName = var;
}

void Contact::setLastName(std::string var)
{
	this->_lastName = var;
}

void Contact::setNickname(std::string var)
{
	this->_nickname = var;
}

void Contact::setPhoneNumber(std::string var)
{
	this->_phoneNumber = var;
}

void Contact::setDarkestSecret(std::string var)
{
	this->_darkestSecret = var;
}

std::string Contact::getFirstName() const
{
	return this->_firstName;
}

std::string Contact::getLastName() const
{
	return this->_lastName;
}

std::string Contact::getNickname() const
{
	return this->_nickname;
}

std::string Contact::getPhoneNumber() const
{
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return this->_darkestSecret;
}