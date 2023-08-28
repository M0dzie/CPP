/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:26:01 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 14:52:51 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

static int checkError(int argc, char **argv, File &file)
{
    if (argc != 4)
        return (std::cout << "Program must contain 3 parameters, in order : name of a file, and 2 strings" << std::endl, 1);
    file.setName(argv[1]);
    file.setReplaceName();
    std::ifstream infile(file.getName().c_str());
    if (!infile.good())
        return (std::cout << "First parameter is not a valid file" << std::endl, 1);
    return 0;
}

int main(int argc, char **argv)
{
    File file;

    if (checkError(argc, argv, file))
        return 1;
    file.setStrings(argv[2], argv[3]);
    file.createAndCopyFile();
    return 0;
}