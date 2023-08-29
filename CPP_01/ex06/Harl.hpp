/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:29:28 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/29 13:26:17 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

class Harl
{
public:
    Harl();
    ~Harl();
    void complain( std::string level );

private:
    void debug( void ) const;
    void info( void ) const;
    void warning( void ) const;
    void error( void ) const;
};

#endif