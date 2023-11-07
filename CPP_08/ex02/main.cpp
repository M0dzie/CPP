/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:19:41 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/07 09:48:45 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
    std::cout << YELLOW << BOLD << "---- MANDATORY STACK TESTS ----" << RESET << std::endl;
    {
        // MutantStack<int> mstack;
        // std::cout << BLACK << "Add 2 elements" << RESET << std::endl;
        // mstack.push(5);
        // mstack.push(17);
        // std::cout << BLACK << "Size of list : " << RESET << mstack.size() << std::endl;
        // std::cout << BLACK << "First element : " << RESET << mstack.top() << std::endl;
        // std::cout << BLACK << "Delete last element" << RESET << std::endl;
        // mstack.pop();
        // std::cout << BLACK << "Size of list : " << RESET << mstack.size() << std::endl;
        // std::cout << BLACK << "Add 4 elements" << RESET << std::endl;
        // mstack.push(3);
        // mstack.push(5);
        // mstack.push(737);
        // //[...]
        // mstack.push(0);
        // MutantStack<int>::iterator it = mstack.begin();
        // MutantStack<int>::iterator ite = mstack.end();
        // ++it;
        // --it;
        // int index = 0;
        // while (it != ite)
        // {
        //     std::cout << BLACK << index << "th element : " << RESET << *it << std::endl;
        //     ++it;
        //     index++;
        // }
        // std::cout << BLACK << "Copy of the list" << RESET << std::endl;
        // std::stack<int> s(mstack);
        // std::cout << BLACK << "Display of the new list" << RESET << std::endl;
        // index = 0;
        // for (std::list<int>::iterator it = s.begin(); it != s.end(); it++)
        // {
        //     std::cout << BLACK << index << "th element : " << RESET << *it << std::endl;
        //     index++;
        // }
    }
    std::cout << std::endl;
    std::cout << YELLOW << BOLD << "---- MANDATORY LIST TESTS ----" << RESET << std::endl;
    {
        std::list<int> mlist;
        std::cout << BLACK << "Add 2 elements" << RESET << std::endl;
        mlist.push_back(5);
        mlist.push_back(17);
        std::cout << BLACK << "Size of list : " << RESET << mlist.size() << std::endl;
        std::cout << BLACK << "First element : " << RESET << mlist.front() << std::endl;
        std::cout << BLACK << "Delete last element" << RESET << std::endl;
        mlist.pop_back();
        std::cout << BLACK << "Size of list : " << RESET << mlist.size() << std::endl;
        std::cout << BLACK << "Add 4 elements" << RESET << std::endl;
        mlist.push_back(3);
        mlist.push_back(5);
        mlist.push_back(737);
        //[...]
        mlist.push_back(0);
        std::list<int>::iterator it = mlist.begin();
        std::list<int>::iterator ite = mlist.end();
        ++it;
        --it;
        int index = 0;
        while (it != ite)
        {
            std::cout << BLACK << index << "th element : " << RESET << *it << std::endl;
            ++it;
            index++;
        }
        std::cout << BLACK << "Copy of the list" << RESET << std::endl;
        std::list<int> s(mlist);
        std::cout << BLACK << "Display of the new list" << RESET << std::endl;
        index = 0;
        for (std::list<int>::iterator it = s.begin(); it != s.end(); it++)
        {
            std::cout << BLACK << index << "th element : " << RESET << *it << std::endl;
            index++;
        }
    }
    return 0;
}