/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:30:58 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/16 19:24:02 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

PhoneBook::Contact()
{
    std::cout << "class created !" << std::endl;
}

void setFirstName(std::string var)
{
    firstName = var;
}

std::string getFirstName()
{
    return firstName;
}
