/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:27:10 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/17 18:28:12 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

class Array
{
    //private att arr * T , size of the array of T
    private :
        size_t _size;
        T *_arr;    
    public:
        Array() : _size(0), _arr(new T)
        {
            //std::cout << "default constructor called" << std::endl;
        }
        
        Array(unsigned int n) : _size(n), _arr(new T[n])
        {
            //std::cout << "constructor called" << std::endl;
        }
        
        ~Array()
        {
            std::cout << "destructor called" << std::endl;
            delete [] _arr;
        }

        Array(const Array &src)
        {
            //std::cout << "copy constructor called" << std::endl;
            this -> _arr = new T[src._size];
            *this = src;
        }
        Array &operator=(const Array &src)
        {
            this -> _size = src._size;
            size_t i = -1;
            while (++i < this -> _size)
                this -> _arr[i] = src._arr[i];
            return (*this);
        }
        size_t size()
        {
            return (_size);
        }

        T &operator[](unsigned int n)
        {
            if (n >= this -> _size)
                throw OutOfBounds();
            return (this -> _arr[n]);
        }
        class OutOfBounds : public std::exception
        {
            const char *what() const throw()
            {
                return ("out of Bounds");
            }
        };
    };
// there is a problem with the makefile