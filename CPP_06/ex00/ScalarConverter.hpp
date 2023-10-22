    /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:33:40 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/17 15:45:41 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>

# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define GRAY "\033[0;37m"
# define RESET "\033[0m" 
# define BOLD "\033[1m"

# define CHAR 0
# define INT 0
# define FLOAT 1
# define DOUBLE 2

class ScalarConverter
{
private:
public:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &rhs);
    ScalarConverter &operator=(ScalarConverter const &rhs);
    ~ScalarConverter();

    void convert(std::string input);
    void toChar(std::string input);
    void toInt(std::string input);
    void toFloat(std::string input);
    void toDouble(std::string input);
};

#endif