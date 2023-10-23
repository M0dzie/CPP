/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:42:13 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/23 13:47:06 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer const &rhs)
{
    *this = rhs;
}

Serializer &Serializer::operator=(Serializer const &rhs)
{
    (void)rhs;
    return *this;
}

Serializer::~Serializer() {}