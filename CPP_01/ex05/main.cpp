/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:28:43 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/29 13:26:40 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string randLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    std::srand(std::time(NULL));
    harl.complain(randLevel[std::rand() % 4]);
    return 0;
}