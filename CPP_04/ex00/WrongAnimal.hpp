/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:47:13 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/26 13:30:40 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include "Animal.hpp"

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &rhs);
    WrongAnimal &operator=(WrongAnimal const &rhs);
    virtual ~WrongAnimal();

    std::string getType() const;
    void setType(std::string wrongAnimal);

    virtual void makeSound() const;

protected:
    std::string type;

private:  
};

#endif