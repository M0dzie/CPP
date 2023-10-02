/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:19:16 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/02 15:22:52 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
public:
	Cat();
	Cat(Cat const &rhs);
	Cat &operator=(Cat const &rhs);
	virtual ~Cat();
	
	void setBrainIdeas(std::string idea, int index);
	std::string getBrainIdeas(int index) const;

	virtual void makeSound() const;

private:
	Brain* _brain;
};

#endif