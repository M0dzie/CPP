/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:25:47 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/26 11:29:10 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << BLUE << "Brain default constructor called" << RESET << std::endl;
}

Brain::Brain(Brain const &rhs)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = rhs;
}

Brain &Brain::operator=(Brain const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Brain copy assignment operator called" << std::endl;
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << BLUE << BOLD << "Brain destructor called" << RESET << std::endl;
}