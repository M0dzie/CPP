/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:28:46 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/17 11:51:22 by thmeyer          ###   ########.fr       */
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
    Fixed &operator=(Fixed const &);
    void setRawBits(int const raw);
    int getRawBits(void) const;

private:
    int _fixedPointNumber;
    static int const _nBits;
};

#endif