/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:26:03 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/17 21:11:29 by hobenaba         ###   ########.fr       */
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