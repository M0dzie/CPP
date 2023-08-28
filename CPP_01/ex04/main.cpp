/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:26:01 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 12:59:18 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

static int checkError(int argc, char **argv)
{
    if (argc != 4)
        return (std::cout << "Program must contain 3 parameters, in order : name of a file, and 2 strings" << std::endl, 1);
    std::string filename = argv[1];
    std::string replace = filename + ".replace";
    std::ifstream inFile(filename.c_str());
    if (!inFile.good())
        return (std::cout << "First parameter is not a valid file" << std::endl, 1);
    return 0;
}

int main(int argc, char **argv)
{
    if (checkError(argc, argv))
        return 1;
    return 0;
}