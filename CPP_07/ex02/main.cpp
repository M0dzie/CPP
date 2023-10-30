/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:45:54 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/30 14:05:19 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Awesome
{
private:
  int _n;
public:
  Awesome(void) : _n(42) {return;}
  int get(void) const {return this->_n;}
};

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    std::srand(std::time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    std::cout << YELLOW << BOLD << "---- CHECK SAME VALUE ----" << RESET << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << GREEN << BOLD << "OK!" << RESET << std::endl << std::endl;
    
    std::cout << YELLOW << BOLD << "---- COPY TESTS ----" << RESET << std::endl;
    {
        std::cout << BLACK << "Copy by operator '='" << RESET << std::endl;
        Array<int> tmp = numbers;
        std::cout << GREEN << BOLD << "Copy done!" << RESET << std::endl;
        std::cout << "number[98] = " << numbers[98] << std::endl;
        std::cout << "tmp[98] = " << tmp[98] << std::endl;
        std::cout << "Size of arr in numbers = " << numbers.size() << std::endl;
        std::cout << "Size of arr in tmp = " << tmp.size() << std::endl;
        
        std::cout << BLACK << "Copy by assignation" << RESET << std::endl;
        Array<int> test(tmp);
        std::cout << GREEN << BOLD << "Copy done!" << RESET << std::endl;
        std::cout << "tmp[98] = " << tmp[98] << std::endl;
        std::cout << "test[98] = " << test[98] << std::endl;
        std::cout << "Size of arr in tmp = " << tmp.size() << std::endl;
        std::cout << "Size of arr in test = " << test.size() << std::endl;
        std::cout << std::endl;
    
        std::cout << YELLOW << BOLD << "---- CHECK IF COPY IS DEEP ----" << RESET << std::endl;
        std::cout << BLACK << "Previous change" << RESET << std::endl;
        std::cout << "number[10] = " << numbers[10] << std::endl;
        std::cout << "tmp[10] = " << tmp[10] << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        std::cout << BLACK << "After change" << RESET << std::endl;
        std::cout << "number[10] = " << numbers[10] << std::endl;
        std::cout << "tmp[10] = " << tmp[10] << std::endl;
    }
    std::cout << std::endl;

    std::cout << YELLOW << BOLD << "---- TRIGGER EXCEPTIONS ----" << RESET << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    std::cout << YELLOW << BOLD << "---- CLASS TEST ----" << RESET << std::endl;
    {
        Array<Awesome> ns(4);
        std::cout << "Size of the array : " << ns.size() << std::endl;
    }
    std::cout << std::endl;
    std::cout << YELLOW << BOLD << "---- CONST CASS TEST (READ ONLY) ----" << RESET << std::endl;
    {
        const Array<int> test(numbers);
        std::cout << "test[0] : " << test[0] << std::endl;
        std::cout << "numbers[0] : " << numbers[0] << std::endl;
    }
    std::cout << std::endl; 
    std::cout << YELLOW << BOLD << "---- TEST VOID ARRAY ----" << RESET << std::endl;
    {
        Array<int> test;
        std::cout << test[0] << std::endl;
    }
    delete [] mirror;
    return 0;
}