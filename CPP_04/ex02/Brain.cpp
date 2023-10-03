/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:25:47 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 11:17:53 by thmeyer          ###   ########.fr       */
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
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = rhs._ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << BLUE << BOLD << "Brain destructor called" << RESET << std::endl;
}

void Brain::setIdeas(std::string idea, int index)
{   
    if (index >= 100)
    {
        std::cout << RED << "The brain is not so big" << RESET << std::endl;
        return ;
    }
    this->_ideas[index] = idea;
}

std::string Brain::getIdeas(int index) const
{
    return (this->_ideas[index]);
}