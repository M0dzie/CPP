/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:47:21 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 16:35:05 by thmeyer          ###   ########.fr       */
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
    bool operator>(Fixed const &src) const;
    bool operator<(Fixed const &src) const;
    bool operator>=(Fixed const &src) const;
    bool operator<=(Fixed const &src) const;
    bool operator==(Fixed const &src) const;
    bool operator!=(Fixed const &src) const;
    Fixed operator+(Fixed const &src);
    Fixed operator-(Fixed const &src);
    Fixed operator*(Fixed const &src);
    Fixed operator/(Fixed const &src);
    Fixed operator++(int);
    Fixed &operator++(void);
    Fixed operator--(int);
    Fixed &operator--(void);

    void setRawBits(int const raw);
    int getRawBits(void) const;
    int toInt(void) const;
    float toFloat(void) const;

    static Fixed &min(Fixed &left, Fixed &right);
    static Fixed const &min(Fixed const &left, Fixed const &right);
    static Fixed &max(Fixed &left, Fixed &right);
    static Fixed const &max(Fixed const &left, Fixed const &right);

private:
    int _fixedPointNumberValue;
    
    static int const _nFractionalBits;
};

std::ostream &operator<<(std::ostream &outPut, Fixed const &src);

#endif