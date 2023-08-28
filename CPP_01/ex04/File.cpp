/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:12:45 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 17:51:00 by thmeyer          ###   ########.fr       */
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

std::string File::replace(std::string str)
{
    std::string newStr;

    for (int i = 0; str[i]; i++)
    {
        if (str.find(this->_s1) <= str.size())
        {
            newStr.append(this->_s2);
            i += this->_s2.size();
        }
        else
            newStr.append(newStr, i, 1);
    }
    return newStr;
}

void File::createAndCopyFile()
{
    std::string str;
    std::ifstream infile(this->_name.c_str());
    std::ofstream outfile(this->_replace.c_str());

    while (getline(infile, str))
    {
        if (str.find(this->_s1) <= str.size())
        {
            std::cout << "found it !" << std::endl;
            str = this->replace(str);
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
