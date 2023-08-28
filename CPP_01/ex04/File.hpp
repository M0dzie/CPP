/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:05:32 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 17:14:17 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP
# include <iostream>
# include <string>
# include <fstream>

class File
{
public:
    File();
    ~File();
    void setName(std::string name);
    void setReplaceName();
    void setStrings(std::string s1, std::string s2);
    void createAndCopyFile();
    std::string getName() const;
    std::string replace(std::string str);
    
private:
    std::string _name;
    std::string _replace;
    std::string _s1;
    std::string _s2;
};

#endif