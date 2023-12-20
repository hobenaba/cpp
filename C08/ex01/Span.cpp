/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:46:49 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/20 20:48:29 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    //std::cout << "default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _N(n)
{
    //std::cout << "constructor called" << std::endl;
}

Span::Span(const Span &src)
{
    //std::cout << "copy constructor called" << std::endl;
    *this = src;
}

Span &Span::operator=(const Span &src)
{
    this -> _N = src._N;
    return (*this);
}

Span::~Span()
{
    //std::cout << "destrcutor called" << std::endl;
}

void Span::addNumber(int n)
{
    if(this -> _Numbers.size() == this -> _N)
        throw Span::fullContainer();
    this ->_Numbers.push_back(n);
}

void Span::addNumber(const iteratorType begin, const iteratorType end)
{
    if (static_cast<unsigned long>(end - begin) > this -> _N - this -> _Numbers.size())
        throw Span::fullContainer();
    iteratorType it = begin - 1;
    while (++it < end)
        this->_Numbers.push_back(*it);
}
int Span::shortestSpan()
{
    if (this -> _Numbers.size() <= 1)
        throw Span::SpanException();
    int min = INT_MAX;
    int tmp;
    std::vector<int>::iterator it = this -> _Numbers.begin() - 1;
    std::vector<int>::iterator jt;

    while (++it < this -> _Numbers.end() - 1)
    {
        jt = it;
        while (++jt < this -> _Numbers.end())
        {
            tmp = abs(*it -*jt);
            if (min > tmp)
                min = tmp;
        }
    }
    return (min);
}

int Span::longestSpan()
{
    if (this -> _Numbers.size() <= 1)
        throw Span::SpanException();
    return (*max_element(_Numbers.begin(), _Numbers.end()) - *min_element(_Numbers.begin(), _Numbers.end()));
}

const char *Span::SpanException::what() const throw()
{
    return ("one or no number stored, so no span found");
}

const char *Span::fullContainer::what() const throw()
{
    return ("no space to store the new element");
}