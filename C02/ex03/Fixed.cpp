/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:38:55 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/02 18:37:00 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed() : FixedNumber(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    //std::cout << "copy constructor called" << std::endl;
    *this = src;
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
Fixed::~Fixed()
{ 
    //std::cout << "Destructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &src)
{
    //std::cout << "copy assignment operator called" << std::endl;
    this -> FixedNumber = src.FixedNumber;
    return (*this);
}
std::ostream & operator<<(std::ostream &o, const Fixed &src)
{
    o << src.toFloat();
    return (o);
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
Fixed   Fixed::operator*(const Fixed &src)
{
    Fixed a;
    a.setRawBits((this -> FixedNumber * src.FixedNumber) / 256);
    return a;
}

Fixed   Fixed::operator+(const Fixed &src)
{
    Fixed a;
    a.setRawBits(this -> FixedNumber + src.FixedNumber);
    return a;
}

Fixed   Fixed::operator-(const Fixed &src)
{
    Fixed a;
    a.setRawBits(this -> FixedNumber - src.FixedNumber);
    return a;
}

Fixed   Fixed::operator/(const Fixed &src)
{
    Fixed a;
    a.setRawBits(roundf((((float)this -> FixedNumber / src.FixedNumber ) * 256)));
    return a;
}
bool   Fixed::operator>(const Fixed &src) const
{
    return (this -> FixedNumber > src.FixedNumber);
}
bool   Fixed::operator>=(const Fixed &src) const
{
    return (this -> FixedNumber >= src.FixedNumber);
}
bool   Fixed::operator<(const Fixed &src) const
{
    return (this -> FixedNumber < src.FixedNumber);
}
bool   Fixed::operator<=(const Fixed &src) const
{
    return (this -> FixedNumber <= src.FixedNumber);
}
bool   Fixed::operator==(const Fixed &src) const
{
    return (this -> FixedNumber == src.FixedNumber);
}
bool   Fixed::operator!=(const Fixed &src) const
{
    return (this -> FixedNumber != src.FixedNumber);
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
float Fixed::toFloat(void) const
{
    return ((float)this -> FixedNumber / 256);
}
int Fixed::toInt(void) const
{
    return (this -> FixedNumber >> FractionalBits);
}
Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
    if (n1 <= n2)
        return (n1);
    else
        return (n2);
}

Fixed const &Fixed::min(const Fixed &n1, const Fixed &n2)
{
    if (n1 <= n2)
        return (n1);
    else
        return (n2);
}
Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
    if (n1 <= n2)
        return (n2);
    else
        return (n1);
}
Fixed const &Fixed::max(const Fixed &n1, const Fixed &n2)
{
      if (n1 <= n2)
        return (n2);
    else
        return (n1);
}