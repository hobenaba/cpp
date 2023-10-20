/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:38:55 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/20 16:36:35 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : FixedNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "copy assignment operator called" << std::endl;
    this -> FixedNumber = src.FixedNumber;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this -> FixedNumber);
}

void Fixed::setRawBits(int const raw)
{
    this -> FixedNumber = raw;
}

Fixed::~Fixed()
{ 
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    std::cout << "int constructor called" << std::endl;
    this -> FixedNumber = num << FractionalBits;
}
Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
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
std::ostream & operator<<(std::ostream &o, const Fixed &src)
{
    o << src.toFloat();
    return (o);
}