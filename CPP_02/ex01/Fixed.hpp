/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:30:45 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 13:28:04 by thmeyer          ###   ########.fr       */
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
    Fixed(float const newFloat);
    Fixed(Fixed const &src);
    ~Fixed();
    Fixed &operator=(Fixed const &src);
    void setRawBits(int const raw);
    int getRawBits(void) const;
    int toInt(void) const;
    float toFloat(void) const;

private:
    int _fixedPointNumberValue;
    static int const _nFractionalBits;
};

std::ostream &operator<<(std::ostream &outPut, Fixed const &src);

#endif