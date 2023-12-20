/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:30:31 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/20 19:23:46 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {}
        
        MutantStack(const MutantStack &src)
        {
            *this = src;
        }

        MutantStack &operator=(const MutantStack &src)
        {
            this -> c = src.c ;

            return (*this);
        }
        
        ~MutantStack()
        {
            this ->c.clear();
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin()
        {
            return (this ->c.begin());
        }
        iterator end()
        {
            return (this -> c.end());
        }
};