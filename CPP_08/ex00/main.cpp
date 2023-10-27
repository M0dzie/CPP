/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:37:19 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/27 10:16:55 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::cout << BLACK << "Init array" << RESET << std::endl;
    std::vector<int> arr = {1, 42, 3435, 465, 57, 475, 46};
    
    try
    {
        std::cout << YELLOW << BOLD << "---- TESTS ----" << std::endl;
        std::cout << BLACK << "Testing 46 : " << RESET;
        easyfind(arr, 46);
        std::cout << std::endl;
        std::cout << BLACK << "Testing 47 : " << RESET;
        easyfind(arr, 47);
        std::cout << std::endl;
        std::cout << BLACK << "Testing 2 : " << RESET;
        easyfind(arr, 2);
        std::cout << std::endl;
        std::cout << BLACK << "Testing -20 : " << RESET;
        easyfind(arr, -20);
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}