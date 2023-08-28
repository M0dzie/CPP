/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:26:01 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 13:06:33 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

static int checkError(int argc, char **argv)
{
    if (argc != 4)
        return (std::cout << "Program must contain 3 parameters, in order : name of a file, and 2 strings" << std::endl, 1);
    std::string filename = argv[1];
    std::ifstream inFile(filename.c_str());
    if (!inFile.good())
        return (std::cout << "First parameter is not a valid file" << std::endl, 1);
    return 0;
}

int main(int argc, char **argv)
{
    if (checkError(argc, argv))
        return 1;
    std::string filename = argv[1];
    std::string replace = filename + ".replace";
    return 0;
}