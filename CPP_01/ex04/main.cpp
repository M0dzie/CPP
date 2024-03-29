/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:26:01 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/29 14:08:30 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

static int checkError(int argc, char **argv, File &file)
{
    if (argc != 4)
        return (std::cerr << "Program must contain 3 parameters, in order : name of a file, and 2 strings" << std::endl, 1);
    file.setName(argv[1]);
    file.setReplaceName();
    std::ifstream infile(file.getName().c_str());
    if (!infile.good())
        return (std::cerr << "First parameter is not a valid file" << std::endl, infile.close(), 1);
    infile.close();
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