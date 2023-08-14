/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:23:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/14 23:49:10 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::string cmd;

	if (argc != 2)
		return (std::cout << "Error" << std::endl << "Wrong function call !" << std::endl, 1);
	std::cout << "Please enter one of the following cmd : ADD, SEARCH or EXIT" << std::endl;
	std::cin >> cmd;
	while (cmd != "EXIT")
		std::cin >> cmd;
	return 0;
}