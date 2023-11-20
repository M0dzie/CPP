/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:56:28 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/20 17:44:58 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

const char *PmergeMe::NotAValidChar::what() const throw()
{
    return RED BOLD "Error: " RESET "Invalid character found";
}

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
    
    std::cout << BLACK << "After :   " << RESET;
    this->displayList(this->_list);

    std::cout << BLACK << "Time to process a range of " << RESET << this->_nElements << \
    BLACK << " elements with std::list : " << RESET << std::setprecision(8) << this->_timeList * 1e6 << " us" << std::endl;
    std::cout << BLACK << "Time to process a range of " << RESET << this->_nElements << \
    BLACK << " elements with std::vector : " << RESET << std::setprecision(8) << this->_timeVector * 1e6 << " us"  << std::endl;
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
            if (!std::isdigit(argv[i][j]) && argv[i][j] != '-')
                throw PmergeMe::NotAValidChar();
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

template<typename T>
static void sortList(T &container, int &nElements)
{
    T split[nElements / 2];

// Split the container in nElements / 2 pairs of 2 elements
    for (int i = 0; i < (nElements / 2); i++)
    {
        typename T::iterator it = container.begin();
        if (it == container.end())
            break;
        typename T::iterator itNext = it;
        ++itNext;
        if (*itNext < *it)
            std::swap(itNext, it);
        split[i].push_back(*it);
        split[i].push_back(*itNext);
        container.pop_front();
        container.pop_front();
    }

// Sort the pairs of elements by their highest values
    for (int i = 0; i < (nElements / 2); i++)
    {
        if (i + 1 >= (nElements / 2))
            break;
        if (*split[i].rbegin() > *split[i + 1].rbegin())
        {
            std::swap(split[i], split[i + 1]);
            i = -1;
        }
    }

// Insert all the highest values of pairs in the main chain
    for (int i = 0; i < (nElements / 2); i++)
        container.push_back(*split[i].rbegin());

// Insert now the lowest values
    for (int i = 0; i < (nElements / 2); i++)
    {
        for (typename T::iterator it = container.begin(); it != container.end(); ++it)
        {
            if (*split[i].begin() > *it)
                continue;
            container.insert(it, *split[i].begin());
            break;
        }
    }
}

void PmergeMe::mergeInsertSort()
{
    clock_t startList, endList, startVector, endVector;
    
    std::list<int> sorted = this->_list;
    startList = std::clock();
    sortList(this->_list, this->_nElements);
    endList = std::clock();
    sorted.sort();
    if (this->_list == sorted)
        std::cout << GREEN << BOLD << "Success" << RESET << std::endl;
    else
        std::cout << RED << BOLD << "Not sort" << RESET << std::endl;

    startVector = std::clock();
    // sortList(this->_vector, this->_nElements);
    endVector = std::clock();
    this->_timeList = double(endList - startList) / CLOCKS_PER_SEC;
    this->_timeVector = double(endVector - startVector) / CLOCKS_PER_SEC;
    std::cout << this->_timeList << std::endl;
}