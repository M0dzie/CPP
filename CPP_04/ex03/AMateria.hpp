/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:07:54 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/09 11:42:40 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

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

class ICharacter;

class AMateria
{
public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(AMateria const &rhs);
    AMateria &operator=(AMateria const &rhs);
    virtual ~AMateria();

    std::string const &getType() const;
    void setType(std::string type);

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

protected:
    std::string _type;

private:
};

#endif