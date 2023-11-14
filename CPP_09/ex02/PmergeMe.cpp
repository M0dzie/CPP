/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:56:28 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/14 16:12:28 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv) : _nElements(argc - 1)
{
    this->fillContainer(argv);
    
    std::cout << BLACK << "Before :  " << RESET;
    this->displayList(this->_list);
    this->_list.sort();
    std::cout << BLACK << "After :  " << RESET;
    this->displayList(this->_list);
}

PmergeMe::PmergeMe(PmergeMe const &rhs) : _nElements(rhs._nElements), _list(rhs._list) {}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
    if (this != &rhs)
    {
        this->_nElements = rhs._nElements;
        this->_list = rhs._list;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::fillContainer(char **argv)
{
    for (int i = 1; argv[i]; i++)
    {
        for (size_t j = 0; argv[i][j]; j++)
        {
            if (!std::isdigit(argv[i][j]))
                throw PmergeMe::NotPositiveInteger();
        }
        std::istringstream iss(argv[i]);
        std::string intMax = argv[i];
        int value = 0;
        iss >> value;
        if (value < 0 || (value == 2147483647 && intMax.compare("2147483647")))
            throw PmergeMe::NotPositiveInteger();
        this->_list.push_back(value);
    }
}

void PmergeMe::displayList(std::list<int> list)
{
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}