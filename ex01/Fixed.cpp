/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:26:03 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/18 19:15:01 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this -> FixedNumber = 0;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this -> FixedNumber = src.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "copy assignement operator called" << std::endl;
    this -> FixedNumber = src.getRawBits();
    return (*this);
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this -> FixedNumber);
}
void Fixed::setRawBits(int const raw)
{
    this -> FixedNumber = raw;
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
    return (this -> FixedNumber >> FractionalBits);
}
std::ostream & operator<<(std::ostream &o, const Fixed &src)
{
    o << src.toFloat();
    return (o);
}