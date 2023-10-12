/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:49:27 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/12 13:56:47 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::ofstream outfile("Unknown_shrubbery");

    outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⠤⢤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⠤⢤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠁⠀⠀⠈⣷⠻⠛⣦⠴⠶⠤⣤⠞⠉⠀⠀⠀⠙⢳⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠁⠀⠀⠈⣷⠻⠛⣦⠴⠶⠤⣤⠞⠉⠀⠀⠀⠙⢳⡄⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠚⠛⠓⠾⣄⠀⠀⢀⡴⠚⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠚⠛⠓⠾⣄⠀⠀⢀⡴⠚⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⢼⡁⠀⠀⠀⠀⠀⠚⠉⠉⠛⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠾⠧⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢼⡁⠀⠀⠀⠀⠀⠚⠉⠉⠛⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠾⠧⣄⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⣠⡴⠛⠉⠓⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣧⡄⠀⠀⠀⠀⠀⠀⠀⣠⡴⠛⠉⠓⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣧⡄⠀" << std::endl
    << "⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠤⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠟⠃⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠤⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠟⠃⠀" << std::endl
    << "⠀⠀⠀⠀⢰⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠈⢳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠚⢧⡀⠀⠀⠀⠀⠀⠀⢰⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠈⢳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠚⢧⡀⠀⠀" << std::endl
    << "⠀⢀⡴⠚⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⢀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡧⠀⠀⠀⢀⡴⠚⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⢀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡧⠀⠀" << std::endl
    << "⢀⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠢⠖⠚⣧⠀⠀⠀⠀⠀⠀⠀⠰⣤⣤⣤⡞⠁⠀⠀⢀⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠢⠖⠚⣧⠀⠀⠀⠀⠀⠀⠀⠰⣤⣤⣤⡞⠁⠀⠀" << std::endl
    << "⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠰⣦⣀⡀⢀⣠⠏⠀⠀⠀⠐⠶⠤⠴⠚⠁⠠⠿⠧⢤⡀⠀⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠰⣦⣀⡀⢀⣠⠏⠀⠀⠀⠐⠶⠤⠴⠚⠁⠠⠿⠧⢤⡀⠀" << std::endl
    << "⠙⣆⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⠚⠻⡄⠉⣽⣄⣀⣠⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆⠙⣆⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⠚⠻⡄⠉⣽⣄⣀⣠⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆" << std::endl
    << "⠀⢘⡷⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡗⢶⡏⠀⠀⠙⠶⠋⠈⠁⡞⢿⣀⠀⣀⠀⠀⠀⠀⠀⠀⠴⠴⣟⡁⠀⢘⡷⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡗⢶⡏⠀⠀⠙⠶⠋⠈⠁⡞⢿⣀⠀⣀⠀⠀⠀⠀⠀⠀⠴⠴⣟⡁" << std::endl
    << "⠀⢺⡀⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⣤⣴⢿⣧⡀⢳⡀⠀⠀⠀⠀⠀⢰⠇⠀⣿⣿⣥⣠⣄⡀⠀⢀⠀⠀⠀⣽⡇⠀⢺⡀⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⣤⣴⢿⣧⡀⢳⡀⠀⠀⠀⠀⠀⢰⠇⠀⣿⣿⣥⣠⣄⡀⠀⢀⠀⠀⠀⣽⡇" << std::endl
    << "⠀⠀⠙⠦⠤⢾⠀⠀⠀⠀⣀⠀⠀⠀⠀⣻⣦⡿⠙⠛⠃⠀⠀⠀⠀⠀⣼⠀⣼⣯⡿⠛⠉⠿⠤⡤⠟⢣⡤⠿⠋⠁⠀⠀⠙⠦⠤⢾⠀⠀⠀⠀⣀⠀⠀⠀⠀⣻⣦⡿⠙⠛⠃⠀⠀⠀⠀⠀⣼⠀⣼⣯⡿⠛⠉⠿⠤⡤⠟⢣⡤⠿⠋⠁" << std::endl
    << "⠀⠀⠀⠀⠀⠘⢦⣀⣀⣀⡼⠓⠒⠒⠚⠁⠈⠳⡄⠀⠀⠀⠀⠀⠀⢀⣿⣾⣿⠻⣄⣀⢀⡼⠦⣄⣀⣰⠇⠀⠀⠀⠀⠀⠀⠀⠀⠘⢦⣀⣀⣀⡼⠓⠒⠒⠚⠁⠈⠳⡄⠀⠀⠀⠀⠀⠀⢀⣿⣾⣿⠻⣄⣀⢀⡼⠦⣄⣀⣰⠇⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀⢸⣿⣰⠃⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀⢸⣿⣰⠃⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠈⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠈⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢳⠀⠀⠀⠀⠀⠀⢹⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢳⠀⠀⠀⠀⠀⠀⢹⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠈⠀⠀⠀⠀⠀⠀⠈⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠈⠀⠀⠀⠀⠀⠀⠈⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠶⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠘⢦⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠶⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠘⢦⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠛⠓⠒⠒⠒⠒⠒⠶⣤⣀⠀⠀⢶⣤⣀⣀⣀⣉⣙⣲⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠛⠓⠒⠒⠒⠒⠒⠶⣤⣀⠀⠀⢶⣤⣀⣀⣀⣉⣙⣲⣦⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠒⠾⡇⠀⠈⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠒⠾⡇⠀⠈⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣢⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣢⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    outfile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(AForm const &target)
{
    try
    {
        if (target.getGradeToSign() >= 145)
            throw AForm::GradeTooLowException();
        else if  (target.getGradeToExec() >= 137)
            throw AForm::GradeTooLowException();
    }
    catch(const AForm::GradeTooLowException &e)
    {
        if (target.getGradeToSign() >= 145)
            std::cerr << RED << "Grade to Sign issues :" << RESET << std::endl;
        else
            std::cerr << RED << "Grade to Exec issues :" << RESET << std::endl;
        std::cerr << RED << e.what() << RESET << std::endl;
        return;
    }

    std::string name = target.getName() + "_shrubbery"; 
    std::ofstream outfile(name.c_str());
    
    outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⠤⢤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⠤⢤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠁⠀⠀⠈⣷⠻⠛⣦⠴⠶⠤⣤⠞⠉⠀⠀⠀⠙⢳⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠁⠀⠀⠈⣷⠻⠛⣦⠴⠶⠤⣤⠞⠉⠀⠀⠀⠙⢳⡄⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠚⠛⠓⠾⣄⠀⠀⢀⡴⠚⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠚⠛⠓⠾⣄⠀⠀⢀⡴⠚⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⢼⡁⠀⠀⠀⠀⠀⠚⠉⠉⠛⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠾⠧⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢼⡁⠀⠀⠀⠀⠀⠚⠉⠉⠛⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠾⠧⣄⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⣠⡴⠛⠉⠓⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣧⡄⠀⠀⠀⠀⠀⠀⠀⣠⡴⠛⠉⠓⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣧⡄⠀" << std::endl
    << "⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠤⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠟⠃⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠤⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠟⠃⠀" << std::endl
    << "⠀⠀⠀⠀⢰⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠈⢳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠚⢧⡀⠀⠀⠀⠀⠀⠀⢰⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠈⢳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠚⢧⡀⠀⠀" << std::endl
    << "⠀⢀⡴⠚⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⢀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡧⠀⠀⠀⢀⡴⠚⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⢀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡧⠀⠀" << std::endl
    << "⢀⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠢⠖⠚⣧⠀⠀⠀⠀⠀⠀⠀⠰⣤⣤⣤⡞⠁⠀⠀⢀⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠢⠖⠚⣧⠀⠀⠀⠀⠀⠀⠀⠰⣤⣤⣤⡞⠁⠀⠀" << std::endl
    << "⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠰⣦⣀⡀⢀⣠⠏⠀⠀⠀⠐⠶⠤⠴⠚⠁⠠⠿⠧⢤⡀⠀⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠰⣦⣀⡀⢀⣠⠏⠀⠀⠀⠐⠶⠤⠴⠚⠁⠠⠿⠧⢤⡀⠀" << std::endl
    << "⠙⣆⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⠚⠻⡄⠉⣽⣄⣀⣠⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆⠙⣆⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⠚⠻⡄⠉⣽⣄⣀⣠⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆" << std::endl
    << "⠀⢘⡷⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡗⢶⡏⠀⠀⠙⠶⠋⠈⠁⡞⢿⣀⠀⣀⠀⠀⠀⠀⠀⠀⠴⠴⣟⡁⠀⢘⡷⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡗⢶⡏⠀⠀⠙⠶⠋⠈⠁⡞⢿⣀⠀⣀⠀⠀⠀⠀⠀⠀⠴⠴⣟⡁" << std::endl
    << "⠀⢺⡀⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⣤⣴⢿⣧⡀⢳⡀⠀⠀⠀⠀⠀⢰⠇⠀⣿⣿⣥⣠⣄⡀⠀⢀⠀⠀⠀⣽⡇⠀⢺⡀⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⣤⣴⢿⣧⡀⢳⡀⠀⠀⠀⠀⠀⢰⠇⠀⣿⣿⣥⣠⣄⡀⠀⢀⠀⠀⠀⣽⡇" << std::endl
    << "⠀⠀⠙⠦⠤⢾⠀⠀⠀⠀⣀⠀⠀⠀⠀⣻⣦⡿⠙⠛⠃⠀⠀⠀⠀⠀⣼⠀⣼⣯⡿⠛⠉⠿⠤⡤⠟⢣⡤⠿⠋⠁⠀⠀⠙⠦⠤⢾⠀⠀⠀⠀⣀⠀⠀⠀⠀⣻⣦⡿⠙⠛⠃⠀⠀⠀⠀⠀⣼⠀⣼⣯⡿⠛⠉⠿⠤⡤⠟⢣⡤⠿⠋⠁" << std::endl
    << "⠀⠀⠀⠀⠀⠘⢦⣀⣀⣀⡼⠓⠒⠒⠚⠁⠈⠳⡄⠀⠀⠀⠀⠀⠀⢀⣿⣾⣿⠻⣄⣀⢀⡼⠦⣄⣀⣰⠇⠀⠀⠀⠀⠀⠀⠀⠀⠘⢦⣀⣀⣀⡼⠓⠒⠒⠚⠁⠈⠳⡄⠀⠀⠀⠀⠀⠀⢀⣿⣾⣿⠻⣄⣀⢀⡼⠦⣄⣀⣰⠇⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀⢸⣿⣰⠃⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀⢸⣿⣰⠃⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠈⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠈⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢳⠀⠀⠀⠀⠀⠀⢹⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢳⠀⠀⠀⠀⠀⠀⢹⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠈⠀⠀⠀⠀⠀⠀⠈⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠈⠀⠀⠀⠀⠀⠀⠈⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠶⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠘⢦⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠶⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠘⢦⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠛⠓⠒⠒⠒⠒⠒⠶⣤⣀⠀⠀⢶⣤⣀⣀⣀⣉⣙⣲⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠛⠓⠒⠒⠒⠒⠒⠶⣤⣀⠀⠀⢶⣤⣀⣀⣀⣉⣙⣲⣦⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠒⠾⡇⠀⠈⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠒⠾⡇⠀⠈⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl
    << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣢⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣢⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    outfile.close();
    std::cout << "File " << name << " created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs)
{
    *this = rhs;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}