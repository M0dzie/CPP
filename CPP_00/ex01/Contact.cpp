/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:36:09 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/15 00:05:25 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Please enter the following information :" << std::endl;
	std::cout << "First name : ";
	std::cin >> firstName;
}