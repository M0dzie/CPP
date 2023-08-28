/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:12:45 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 14:58:16 by thmeyer          ###   ########.fr       */
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

void File::setStrings(std::string s1, std::string s2)
{
    this->_s1 = s1;
    this->_s2 = s2;
}

void File::createAndCopyFile()
{
    std::string str;
    std::ifstream infile(this->_name.c_str());
    std::ofstream outfile(this->_replace.c_str());

    while (getline(infile, str))
    {
        if (str.find(this->_s1) <= str.size())
            std::cout << "found it !" << std::endl;
        outfile << str << std::endl;
    }
    infile.close();
    outfile.close();
}

std::string File::getName() const
{
    return this->_name;
}
