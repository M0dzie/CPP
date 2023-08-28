/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:12:45 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 15:26:57 by thmeyer          ###   ########.fr       */
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

static std::string replace(std::string str, size_t pos)
{
    (void)str;
    (void)pos;
    std::string newStr;

    return newStr;
}

void File::createAndCopyFile()
{
    size_t pos = 0;
    std::string str;
    std::ifstream infile(this->_name.c_str());
    std::ofstream outfile(this->_replace.c_str());

    while (getline(infile, str))
    {
        pos = str.find(this->_s1);
        if (pos <= str.size())
        {
            str = replace(str, pos);
            std::cout << "found it !" << std::endl;
        }
        outfile << str << std::endl;
    }
    infile.close();
    outfile.close();
}

std::string File::getName() const
{
    return this->_name;
}
