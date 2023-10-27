/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:37:19 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/27 11:31:16 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::cout << YELLOW << BOLD << "---- MAKING ARRAY ----" << RESET << std::endl;
    std::cout << BLACK << "Init array" << RESET << std::endl;
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(42);
    arr.push_back(3435);
    arr.push_back(465); 
    arr.push_back(57);
    arr.push_back(46);
    arr.push_back(475);
    arr.push_back(475);
    arr.push_back(46);
    std::cout << GREEN << BOLD << "OK!" << RESET << std::endl;
    std::cout << BLACK << "Displaying array" << RESET << std::endl;
    for (size_t i = 0; i < arr.size(); i++)
        std::cout << i << "th place : " << arr[i] << std::endl;
    std::cout << std::endl;
    
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
    std::cout << std::endl;
    try
    {
        std::cout << YELLOW << BOLD << "---- TEST 2 (DON'T EXIST) ----" << RESET << std::endl;
        std::cout << BLACK << "Testing 4656 : " << RESET;
        easyfind(arr, 4656);
    }
    catch (const NoOccurenceFound &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        std::cout << YELLOW << BOLD << "---- TEST 3 (DON'T EXIST) ----" << RESET << std::endl;
        std::cout << BLACK << "Testing -1 : " << RESET;
        easyfind(arr, -1);
    }
    catch (const NoOccurenceFound &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        std::cout << YELLOW << BOLD << "---- TEST 4 (EXIST) ----" << RESET << std::endl;
        std::cout << BLACK << "Testing 475 : " << RESET;
        easyfind(arr, 475);
    }
    catch (const NoOccurenceFound &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << YELLOW << BOLD << "---- TEST 5 (EXIST) ----" << RESET << std::endl;
    std::cout << BLACK << "Adding -999 to array" << RESET << std::endl;
    arr.push_back(-999);
    std::cout << GREEN << BOLD << "OK!" << RESET << std::endl;
    try
    {
        std::cout << BLACK << "Testing -999 : " << RESET;
        easyfind(arr, -999);
    }
    catch (const NoOccurenceFound &e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    return 0;
}