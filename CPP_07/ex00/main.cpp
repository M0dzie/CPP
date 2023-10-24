/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:45:29 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/24 13:15:43 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
    {
        int first = 42;
        int second = 24;

        std::cout << BLACK << "First : " << first << RESET << std::endl;
        std::cout << BLACK << "Second : " << second << RESET << std::endl;
        std::cout << GREEN << BOLD << "Result max : " << max<int>(first, second) << RESET << std::endl;
        std::cout << std::endl;
    }
    {
        float first = 42.04;
        float second = 42.1;

        std::cout << BLACK << "First : " << first << RESET << std::endl;
        std::cout << BLACK << "Second : " << second << RESET << std::endl;
        std::cout << GREEN << BOLD << "Result max : " << max<float>(first, second) << RESET << std::endl;
    }

    return 0;
}