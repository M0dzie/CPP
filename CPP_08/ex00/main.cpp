/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:37:19 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/06 14:11:48 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    int index = 0;

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
    arr.push_back(48);
    std::cout << GREEN << BOLD << "OK!" << RESET << std::endl;
    std::cout << BLACK << "Displaying array" << RESET << std::endl;
    for (std::vector<int>::iterator it = arr.begin(); it < arr.end(); *it++)
    {
        std::cout << index << "th place : " << *it << std::endl;
        index++;
    }
    std::cout << std::endl;
    
    try
    {
        std::cout << YELLOW << BOLD << "---- TEST 1 (EXIST) ----" << std::endl;
        std::cout << BLACK << "Testing 46 : " << RESET;
        std::cout << *easyfind(arr, 46) << std::endl;
    }
    catch (const NoOccurenceFound &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        std::cout << YELLOW << BOLD << "---- TEST 2 (DON'T EXIST) ----" << RESET << std::endl;
        std::cout << BLACK << "Testing 4656 : " << RESET;
        std::cout << *easyfind(arr, 4656) << std::endl;
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
        std::cout << *easyfind(arr, -1) << std::endl;
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
        std::cout << *easyfind(arr, 475) << std::endl;
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
        std::cout << *easyfind(arr, -999) << std::endl;
    }
    catch (const NoOccurenceFound &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}