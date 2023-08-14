/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:36:09 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/15 00:21:10 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Please complete the following information :" << std::endl;
	std::cout << "First name : ";
	std::cin >> firstName;
	std::cout << "Last name : ";
	std::cin >> lastName;
	std::cout << "nickname : ";
	std::cin >> nickName;
	std::cout << "Phone number : ";
	std::cin >> phoneNumber;
	std::cout << "Darkest secret : ";
	std::cin >> darkestSecret;
	std::cout << "Thanks for your information !" << std::endl;
}
