/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:22:29 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/25 19:26:00 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

static void otherFuncTest(int &arr)
{
    std::cout << BLACK << "Not template function called : " << RESET << arr << std::endl;
}

int main(void)
{
    std::cout << YELLOW << BOLD << "---- INT ARRAY ----" << RESET << std::endl;
    {
        int array[4] = {21, 42, 212, 424};
        int arrSize = sizeof(array) / sizeof(int);
        iter<int>(array, arrSize, displayArr);
    }
    std::cout << std::endl << YELLOW << BOLD << "---- FLOAT ARRAY ----" << RESET << std::endl;
    {
        float array[10] = {21.3f, 42.0f, 32.0f, 3243243.23f, 32432424.3242f};
        int arrSize = sizeof(array) / sizeof(float);
        iter<float>(array, arrSize, displayArr);
    }
    std::cout << std::endl << YELLOW << BOLD << "---- STRING ARRAY ----" << RESET << std::endl;
    {
        std::string array[4] = {"Hello", "You", "are", "beautiful"};
        int arrSize = sizeof(array) / sizeof(std::string);
        iter<std::string>(array, arrSize, displayArr);
    }
    std::cout << std::endl << YELLOW << BOLD << "---- OTHER FUNC TEST ----" << RESET << std::endl;
    {
        int array[4] = {21, 42, 212, 424};
        int arrSize = sizeof(array) / sizeof(int);
        iter<int>(array, arrSize, otherFuncTest);
    }

    {
        int tab[] = { 0, 1, 2, 3, 4 };
        Awesome tab2[5];

        iter( tab, 5, print<const int> );
        iter( tab2, 5, print<Awesome> );
    }

    return 0;
}