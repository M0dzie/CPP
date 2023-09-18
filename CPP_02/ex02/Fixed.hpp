/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:47:21 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 15:06:24 by thmeyer          ###   ########.fr       */
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
    bool operator>(Fixed &src);
    bool operator<(Fixed &src);
    bool operator>=(Fixed &src);
    bool operator<=(Fixed &src);
    bool operator==(Fixed &src);
    bool operator!=(Fixed &src);

    void setRawBits(int const raw);
    int getRawBits(void) const;
    int toInt(void) const;
    float toFloat(void) const;

    // static int &min(int &fixedPointNumbers1, int &fixedPointNumbers2);
    // static int const &min(int const &fixedPointNumbers1, int const &fixedPointNumbers2);
    // static int &max(int &fixedPointNumbers1, int &fixedPointNumbers2);
    // static int const &max(int const &fixedPointNumbers1, int const &fixedPointNumbers2);

private:
    int _fixedPointNumberValue;
    
    static int const _nFractionalBits;
};

std::ostream &operator<<(std::ostream &outPut, Fixed const &src);

#endif