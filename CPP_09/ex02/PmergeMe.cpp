/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:56:28 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/20 14:13:43 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

const char *PmergeMe::NotPositiveInteger::what() const throw()
{
    return RED BOLD "Error: " RESET "Argument must be a positive integer";
}

const char *PmergeMe::DuplicateNumber::what() const throw()
{
    return RED BOLD "Error: " RESET "No duplicate numbers in argument";
}

PmergeMe::PmergeMe(int argc, char **argv) : _nElements(argc - 1), _timeList(0), _timeVector(0)
{
    this->fillContainer(argv);
    
    std::cout << BLACK << "Before :  " << RESET;
    this->displayList(this->_list);

    this->mergeInsertSort();
    
    std::cout << BLACK << "After :  " << RESET;
    this->displayList(this->_list);

    std::cout << std::fixed << std::setprecision(5);
    std::cout << BLACK << "Time to process a range of " << RESET << this->_nElements << \
    BLACK << " elements with std::list : " << RESET << this->_timeList << " us" << std::endl;
    std::cout << BLACK << "Time to process a range of " << RESET << this->_nElements << \
    BLACK << " elements with std::vector : " << RESET << this->_timeVector << " us"  << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const &rhs) : _nElements(rhs._nElements), _timeList(rhs._timeList), _timeVector(rhs._timeVector), _list(rhs._list), _vector(rhs._vector) {}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
    if (this != &rhs)
    {
        this->_nElements = rhs._nElements;
        this->_list = rhs._list;
        this->_vector = rhs._vector;
        this->_timeList = rhs._timeList;
        this->_timeVector = rhs._timeVector;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

static bool isDuplicateNumber(std::list<int> list)
{
    size_t previousSize = list.size();

    list.sort();
    list.unique();
    if (list.size() != previousSize)
        return true;
    return false;
}

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
        this->_vector.push_back(value);
    }
    if (isDuplicateNumber(this->_list))
        throw PmergeMe::DuplicateNumber();
}

void PmergeMe::displayList(std::list<int> list)
{
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::sortList()
{
    std::list<int> split[this->_nElements / 2];

// Split the container in nElements / 2 pairs of 2 elements
    for (int i = 0; i < (this->_nElements / 2); i++)
    {
        std::list<int>::iterator it = this->_list.begin();
        if (it == this->_list.end())
            break;
        std::list<int>::iterator itNext = it;
        ++itNext;
        if (*itNext < *it)
            std::swap(itNext, it);
        split[i].push_back(*it);
        split[i].push_back(*itNext);
        this->_list.pop_front();
        this->_list.pop_front();
    }

    std::cout << std::endl;
    std::cout << YELLOW << BOLD << "Before sort of highest values" << RESET << std::endl;
    for (int i = 0; i < (this->_nElements / 2); i++)
    {
        std::cout << BLACK << i << "th split : " << RESET << std::endl;
        for (std::list<int>::iterator it = split[i].begin(); it != split[i].end(); ++it)
            std::cout << *it << std::endl;
    }
    std::cout << std::endl;

// Sort the pairs of elements by their highest values
    for (int i = 0; i < (this->_nElements / 2); i++)
    {
        if (i + 1 >= (this->_nElements / 2))
            break;
        if (*split[i].rbegin() > *split[i + 1].rbegin())
            std::swap(split[i], split[i + 1]);
    }

    std::cout << YELLOW << BOLD << "After sort of highest values" << RESET << std::endl;
    for (int i = 0; i < (this->_nElements / 2); i++)
    {
        std::cout << BLACK << i << "th split : " << RESET << std::endl;
        for (std::list<int>::iterator it = split[i].begin(); it != split[i].end(); ++it)
            std::cout << *it << std::endl;
    }
    std::cout << std::endl;

// Insert all the highest values of pairs in the main chain
    for (int i = 0; i < (this->_nElements / 2); i++)
        this->_list.push_back(*split[i].rbegin());

// Insert now the lowest values
    for (int i = 0; i < (this->_nElements / 2); i++)
    {
        for (std::list<int>::iterator it = this->_list.begin(); it != this->_list.end(); ++it)
        {
            if (*split[i].begin() > *it)
                continue;
            this->_list.insert(it, *split[i].begin());
            break;
        }
    }
}

void PmergeMe::sortVector()
{
}

void PmergeMe::mergeInsertSort()
{
    clock_t startList, endList, startVector, endVector;
    
    startList = std::clock();
    std::list<int> sorted = this->_list;
    sorted.sort();
    sortList();
    if (this->_list == sorted)
        std::cout << GREEN << BOLD << "Success" << RESET << std::endl;
    else
        std::cout << RED << BOLD << "Not sort" << RESET << std::endl;
    endList = std::clock();

    
    startVector = std::clock();
    sortVector();
    endVector = std::clock();
    this->_timeList = (endList - startList) / double(CLOCKS_PER_SEC) * 1000;
    this->_timeVector = (endVector - startVector) / double(CLOCKS_PER_SEC) * 1000;
    std::cout << this->_timeList << std::endl;
}