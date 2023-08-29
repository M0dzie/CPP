/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:37:03 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/29 14:34:37 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of the string variable : " << &str << std::endl
    << "Memory address held by stringPTR : " << stringPTR << std::endl
    << "Memory address held by stringREF : " << &stringREF << std::endl;
    
    std::cout << "Value of the string variable : " << str << std::endl
    << "Value pointed to by stringPTR : " << *stringPTR << std::endl
    << "Value pointed to by stringREF : " << stringREF << std::endl;
    return 0;
}