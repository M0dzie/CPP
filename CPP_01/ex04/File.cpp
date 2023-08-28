/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:12:45 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 13:22:27 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File() {}

File::~File() {}

void File::setName(std::string name)
{
    this->_name = name;
}

void File::setReplaceName()
{
    this->_replace = this->_name + ".replace";
}

std::string File::getName() const
{
    return this->_name;
}

std::string File::getReplaceName() const
{
    return this->_replace;
}
