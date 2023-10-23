/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:42:13 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/23 15:49:39 by thmeyer          ###   ########.fr       */
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

uintptr_t Serializer::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}