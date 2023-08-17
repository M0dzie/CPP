/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:31:57 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/17 11:37:20 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string var)
{
	firstName = var;
}

void Contact::setLastName(std::string var)
{
	lastName = var;
}

void Contact::setNickname(std::string var)
{
	nickname = var;
}

void Contact::setPhoneNumber(std::string var)
{
	phoneNumber = var;
}

void Contact::setDarkestSecret(std::string var)
{
	darkestSecret = var;
}

std::string Contact::getFirstName()
{
	return firstName;
}

std::string Contact::getLastName()
{
	return lastName;
}

std::string Contact::getNickname()
{
	return nickname;
}

std::string Contact::getPhoneNumber()
{
	return phoneNumber;
}

std::string Contact::getDarkestSecret()
{
	return darkestSecret;
}