/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:56:28 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/21 14:14:15 by thmeyer          ###   ########.fr       */
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
    this->displayList(this->_list, true);

    this->mergeInsertSort();
    
    std::cout << BLACK << "After :   " << RESET;
    this->displayList(this->_list, false);

    std::cout << BLACK << "Time to process a range of " << RESET << this->_nElements << \
    BLACK << " elements with std::list : " << RESET << this->_timeList<< " us" << std::endl;
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

void PmergeMe::displayList(std::list<int> list, bool before)
{
    int index = 0;

    if (before)
    {
        if (this->_nElements < 5)
            for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
                std::cout << *it << " ";
        else
        {
            for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
            {
                if (index == 5)
                    break;
                std::cout << *it << " ";
                index++;
            }
            std::cout << "[...]"; 
        }
    }
    else
        for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
            std::cout << *it << " ";
    std::cout << std::endl;
}

template<typename T>
static void sort(T &container, int &nElements)
{
    std::deque<std::pair<int, int> > pair;
    std::deque<int> lowest, highest;
    int last = 0;

// Keep track of the last elements if the nb of elements is odd
    if (nElements % 2 != 0)
        last = container.back();

// Split the container in nElements / 2 pairs of 2 elements
    for (typename T::iterator it = container.begin(); it != container.end(); ++it)
    {
        typename T::iterator itNext = it;
        itNext++;
        if (itNext == container.end())
            break;
        pair.push_back(std::make_pair(*it, *itNext));
        it = itNext;
    }
    container.clear();

// Put the lowest value in first place, and the highest in second
    for (size_t i = 0; i < pair.size(); i++)
        if (pair[i].first > pair[i].second)
            std::swap(pair[i].first, pair[i].second);
        
// Insert all the highest values of pairs in the main chain and tmp
    for (size_t i = 0; i < pair.size(); i++)
    {
        highest.push_back(pair[i].second);
        lowest.push_back(pair[i].first);
    }

// Sort highest and add it to container
    std::sort(highest.begin(), highest.end());
    container.insert(container.begin(), highest.begin(), highest.end());

// Insert now the lowest values
    for (size_t i = 0; i < lowest.size(); i++)
        container.insert(std::lower_bound(container.begin(), container.end(), lowest[i]), lowest[i]);

// Add saved elements in case of odd nb of elements
    if (nElements % 2 != 0)
        container.insert(std::lower_bound(container.begin(), container.end(), last), last);
}

void PmergeMe::mergeInsertSort()
{
    struct timeval start, end;
    long sec, microSec;

    std::list<int> sorted = this->_list;
    gettimeofday(&start, NULL);
    sort(this->_list, this->_nElements);
    gettimeofday(&end, NULL);
    sec = end.tv_sec - start.tv_sec;
    microSec = end.tv_usec - start.tv_usec;
    this->_timeList = (sec / 1000000) + microSec;
    
    std::cout << BLACK << "Merge-insertion sort works ? : ";
    sorted.sort();
    if (this->_list == sorted)
        std::cout << GREEN << BOLD << "Success" << RESET << std::endl;
    else
        std::cout << RED << BOLD << "Not sort" << RESET << std::endl;

    gettimeofday(&start, NULL);
    sort(this->_vector, this->_nElements);
    gettimeofday(&end, NULL);
    sec = end.tv_sec - start.tv_sec;
    microSec = end.tv_usec - start.tv_usec;
    this->_timeVector = (sec / 1000000) + microSec;
}