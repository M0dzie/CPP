/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:42:58 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 18:44:06 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &rhs)
{
    *this = rhs;
}

Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}

Intern::~Intern() {}