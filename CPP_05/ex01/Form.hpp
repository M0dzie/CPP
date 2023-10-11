/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:33:55 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/11 15:12:28 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

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

# define TRUE 1
# define FALSE 0

class Bureaucrat;

class Form
{
public:
    Form();
    Form(std::string name, int gradeToSign, int gradeToExec);
    Form(Form const &rhs);
    Form &operator=(Form const &rhs);
    ~Form();

    std::string getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExec() const;

    void beSigned(Bureaucrat &who);
    
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return RED "The grade is out of bounds, it's too low" RESET;
        }
    };
    
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return RED "The grade is out of bounds, it's too high" RESET;
        }
    };

private:
    std::string const _name;
    bool _signed;
    int const _gradeToSign;
    int const _gradeToExec;
    
};

std::ostream &operator<<(std::ostream &output, Form const &rhs);

#endif