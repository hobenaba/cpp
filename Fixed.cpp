/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:38:55 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/20 17:57:51 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : FixedNumber(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    //std::cout << "copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    //std::cout << "copy assignment operator called" << std::endl;
    this -> FixedNumber = src.FixedNumber;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed a;

    a = *this;
    this -> FixedNumber++;
    return (a);
}
Fixed &Fixed::operator++()
{
    this -> FixedNumber++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed a;

    a = *this;
    this -> FixedNumber--;
    return (a);
}
Fixed &Fixed::operator--()
{
    this -> FixedNumber--;
    return (*this);
}
int Fixed::getRawBits(void) const
{
   // std::cout << "getRawBits member function called" << std::endl;
    return (this -> FixedNumber);
}

void Fixed::setRawBits(int const raw)
{
    this -> FixedNumber = raw;
}

Fixed::~Fixed()
{ 
    //std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    //std::cout << "int constructor called" << std::endl;
    this -> FixedNumber = num << FractionalBits;
}
Fixed::Fixed(const float num)
{
    //std::cout << "Float constructor called" << std::endl;
    this -> FixedNumber = roundf(num * 256);
}
float Fixed::toFloat(void) const
{
    return ((float)this -> FixedNumber / 256);
}
int Fixed::toInt(void) const
{
    return (this -> FixedNumber >> 8);
}
int &Fixed::min(int &n1, int &n2)
{
    if (n1 <= n2);
        return (n1);
    else
        return (n2);
}

int &Fixed::min(const int &n1, const int &n2)
{
    if (n1 <= n2);
        return (n1);
    else
        return (n2);
}
int &Fixed::max(int &n1, int &n2)
{
    if (n1 <= n2);
        return (n2);
    else
        return (n1);
}
int &Fixed::max(const int &n1, const int &n2)
{
    if (n1 <= n2);
        return (n2);
    else
        return (n1);
}
std::ostream & operator<<(std::ostream &o, const Fixed &src)
{
    o << src.toFloat();
    return (o);
}

Fixed   operator*(const Fixed &src1, const Fixed &src2)
{
    Fixed a;
    a.FixedNumber = (src1.toFloat() * src2.toFloat()) * 256;
    return (a);
}

Fixed   operator+(const Fixed &src1, const Fixed &src2)
{
    Fixed a;
    a.FixedNumber = (src1.toFloat() + src2.toFloat()) * 256;
    return (a);
}

Fixed   operator-(const Fixed &src1, const Fixed &src2)
{
    Fixed a;
    a.FixedNumber = (src1.toFloat() - src2.toFloat()) * 256;
    return (a);
}

Fixed   operator/(const Fixed &src1, const Fixed &src2)
{
    Fixed a;
    if (src2.toFloat() == 0)
        std::cout << "invalid operation" << std::endl;
    else
        a.FixedNumber = (src1.toFloat() / src2.toFloat()) * 256;
    return (a);
}
bool   operator>(const Fixed &src1, const Fixed &src2)
{
    return (src1.FixedNumber > src2.FixedNumber);
}
bool   operator>=(const Fixed &src1, const Fixed &src2)
{
    return (src1.FixedNumber >= src2.FixedNumber);
}
bool   operator<(const Fixed &src1, const Fixed &src2)
{
    return (src1.FixedNumber < src2.FixedNumber);
}
bool   operator<=(const Fixed &src1, const Fixed &src2)
{
    return (src1.FixedNumber <= src2.FixedNumber);
}
bool   operator==(const Fixed &src1, const Fixed &src2)
{
    return (src1.FixedNumber == src2.FixedNumber);
}
bool   operator!=(const Fixed &src1, const Fixed &src2)
{
    return (src1.FixedNumber != src2.FixedNumber);
}
