/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:48:19 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/22 18:36:30 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <string>
# include <stack>
# include <sstream>

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

class RPN
{
private:
    RPN();

    std::stack<int> _digit;
    std::stack<int> _operator;
    
public:
    RPN(std::string const &arg);
    RPN(RPN const &rhs);
    RPN &operator=(RPN const &rhs);
    ~RPN();

    void doCalculate();
};

bool isOperator(int c);

void displayErrorMessage(std::string const &msg);

#endif