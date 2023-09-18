/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:30:45 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 10:45:06 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
public:
    Fixed();
    Fixed(int const newInt);
    Fixed(Fixed const &src);
    ~Fixed();
    Fixed &operator=(Fixed const &);

private:
    int _fixedPointNumberValue;
    static int const _nFractionalBits;
};

#endif