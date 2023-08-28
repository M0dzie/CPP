/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:05:32 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 14:36:36 by thmeyer          ###   ########.fr       */
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
    void createAndCopyFile();
    std::string getName() const;
    std::string getReplaceName() const;
    
private:
    std::string _name;
    std::string _replace;
};

#endif