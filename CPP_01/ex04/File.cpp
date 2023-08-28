/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:12:45 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 14:43:33 by thmeyer          ###   ########.fr       */
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

void File::createAndCopyFile()
{
    std::string str;
    std::ifstream infile(this->getName().c_str());
    std::ofstream outfile(this->getReplaceName().c_str());

    while (getline(infile, str))
        outfile << str << std::endl;
    infile.close();
    outfile.close();
}

std::string File::getName() const
{
    return this->_name;
}

std::string File::getReplaceName() const
{
    return this->_replace;
}