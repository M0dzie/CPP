/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:40:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/23 15:44:08 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data *data = new Data();
    Data *datacpy = new Data();

    std::cout << YELLOW << BOLD << "---- INIT DATA ----" << RESET << std::endl;
    data->name = "Mehdi";
    data->age = 28;
    data->gender = "male";
    std::cout << GREEN << BOLD << "OK !" << RESET << std::endl;
    std::cout << BLACK << "---- DISPLAY DATA ----" << RESET << std::endl;
    std::cout << "Name : " << data->name << std::endl << "Age : " << data->age
    << std::endl << "Gender : " << data->gender << std::endl << std::endl;
    
    std::cout << YELLOW << BOLD << "---- INIT DATACPY ----" << RESET << std::endl;
    datacpy->name = "Unknown";
    datacpy->age = 0;
    datacpy->gender = "something";
    std::cout << GREEN << BOLD << "OK !" << RESET << std::endl;
    std::cout << BLACK << "---- DISPLAY DATACPY ----" << RESET << std::endl;
    std::cout << "Name : " << datacpy->name << std::endl << "Age : " << datacpy->age
    << std::endl << "Gender : " << datacpy->gender << std::endl << std::endl;

    std::cout << YELLOW << BOLD << "---- SERIALIZE ----" << RESET << std::endl;
    uintptr_t dataptr = Serializer::serialize(data);
    std::cout << GREEN << BOLD << "OK !" << RESET << std::endl << std::endl;

    std::cout << YELLOW << BOLD << "---- DESERIALIZE ----" << RESET << std::endl;
    datacpy = Serializer::deserialize(dataptr);
    std::cout << GREEN << BOLD << "OK !" << RESET << std::endl << std::endl;
    
    std::cout << BLACK << "---- DISPLAY DATA ----" << RESET << std::endl;
    std::cout << "Name : " << data->name << std::endl << "Age : " << data->age
    << std::endl << "Gender : " << data->gender << std::endl << std::endl;
    std::cout << BLACK << "---- DISPLAY DATACPY ----" << RESET << std::endl;
    std::cout << "Name : " << datacpy->name << std::endl << "Age : " << datacpy->age
    << std::endl << "Gender : " << datacpy->gender << std::endl;

    delete data;
    return 0;
}