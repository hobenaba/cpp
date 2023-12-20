/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:43:08 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/20 16:06:45 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span {
    private:
        unsigned int _N;
        std::vector<int> _Numbers;
        Span();
    public:
        Span(unsigned int n);
        
        Span(const Span &src);
        Span &operator=(const Span &src);
        ~Span();

        void addNumber(int n);
        void addNumber(std::vector<int> numbers);
        int shortestSpan();
        int longestSpan();

    class SpanException : public std::exception
    {
        public:
            const char *what() const  throw();
    };

    class fullContainer : public std::exception
    {
        public:
            const char *what() const  throw();
    };  
};

