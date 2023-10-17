/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:30:06 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/17 15:40:26 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 2)
        return (std::cerr << RED << "This program takes only 1 parameter" << RESET << std::endl, 1);
    return 0;
}