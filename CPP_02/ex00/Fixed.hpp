/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:28:46 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/19 11:10:00 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(Fixed const &src);
    ~Fixed();
    Fixed &operator=(Fixed const &src);

    void setRawBits(int const raw);
    int getRawBits(void) const;

private:
    int _fixedPointNumberValue;
    static int const _nFractionalBits;
};

#endif