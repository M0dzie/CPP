/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:54:20 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/23 14:02:11 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {}

Data::Data(Data const &rhs)
{
    *this = rhs;
}

Data &Data::operator=(Data const &rhs)
{
    (void)rhs;
    return *this;
}

Data::~Data() {}