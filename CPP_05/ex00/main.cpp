/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/11 11:17:44 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat meLow(-1);
    Bureaucrat meHigh(160);
    Bureaucrat me(10);
    return 0;
}

// {
//     try
//     {
//         //Do some stuff here
//         if (/*there is an error*/)
//             throw std::exception();
//         else
//             /*Do something*/
//     }
//     catch(const std::exception& e)
//     {
            /*throw va chercher le catch*/
            /*Handle the error here*/
//         std::cerr << e.what() << '\n';
//     }
// }
// {
    // class MyException : public std::exception
    // {
    // public:
    //     virtual const char *what() const throw() // donc cette fonction peut (ou pas) throw une exception
            // {
            //     return("My problem");
            // }
    // }
    // Je peux donc manipuler MyException avec les specificites de std::exception et donc le catch
// }
// Je peux catch differente exception a la suite, et seul la bonne sera appelee
// -> catch generique =/= catch specifique