/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:42:13 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/23 15:27:25 by thmeyer          ###   ########.fr       */
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
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data *Serializer::deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data*>(raw);
    return ptr;
}