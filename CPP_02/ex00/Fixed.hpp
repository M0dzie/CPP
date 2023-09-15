/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:28:46 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/15 21:59:55 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed&);
    ~Fixed();
    Fixed &operator=(const Fixed&);
    void setRawBits(int const);
    int getRawBits(void) const;

private:
    int _number;
    static int const _nBits;
};

#endif