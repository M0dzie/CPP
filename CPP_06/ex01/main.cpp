/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:40:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/23 14:16:43 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data *origin = NULL;
    Data *test;

    test = Serializer::deserialize(Serializer::serialize(origin));
    std::cout << "origin : " << &origin << std::endl;
    std::cout << "test : " << &test << std::endl;
    
    return 0;
}