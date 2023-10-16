/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:19:23 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 16:50:38 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
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

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &rhs);
    Bureaucrat &operator=(Bureaucrat const &rhs);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;
    void setGrade(int grade);

    void increaseGrade();
    void decreaseGrade();

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return RED "The grade couldn't be below 150" RESET;
        }
    };
    
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return RED "The grade couldn't be above 1" RESET;
        }
    };

private:
    std::string const _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &rhs);

#endif
