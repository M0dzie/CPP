/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:22:29 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/25 17:16:32 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

static void otherFuncTest(int arr)
{
    std::cout << BLACK << "Not template function called : " << RESET << arr << std::endl;
}

int main(void)
{
    std::cout << YELLOW << BOLD << "---- INT ARRAY ----" << RESET << std::endl;
    {
        int array[4] = {21, 42, 212, 424};
        int arrSize = sizeof(array) / sizeof(int);
        iter<int>(array, arrSize, displayArr);
    }
    std::cout << std::endl << YELLOW << BOLD << "---- FLOAT ARRAY ----" << RESET << std::endl;
    {
        float array[10] = {21.3f, 42.0f, 32.0f, 3243243.23f, 32432424.3242f};
        int arrSize = sizeof(array) / sizeof(float);
        iter<float>(array, arrSize, displayArr);
    }
    std::cout << std::endl << YELLOW << BOLD << "---- STRING ARRAY ----" << RESET << std::endl;
    {
        std::string array[4] = {"Hello", "You", "are", "beautiful"};
        int arrSize = sizeof(array) / sizeof(std::string);
        iter<std::string>(array, arrSize, displayArr);
    }
    std::cout << std::endl << YELLOW << BOLD << "---- OTHER FUNC TEST ----" << RESET << std::endl;
    {
        int array[4] = {21, 42, 212, 424};
        int arrSize = sizeof(array) / sizeof(int);
        iter<int>(array, arrSize, otherFuncTest);
    }

    return 0;
}