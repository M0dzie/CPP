/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:37:19 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/27 10:20:30 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::cout << BLACK << "Init array" << RESET << std::endl;
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(42);
    arr.push_back(3435);
    arr.push_back(465);
    arr.push_back(57);
    arr.push_back(46);
    arr.push_back(475);
    std::cout << GREEN << BOLD << "OK!" << RESET << std::endl;
    
    try
    {
        std::cout << YELLOW << BOLD << "---- TEST 1 (EXIST) ----" << std::endl;
        std::cout << BLACK << "Testing 46 : " << RESET;
        easyfind(arr, 46);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}