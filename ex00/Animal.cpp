/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:04:57 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 15:29:05 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
 
Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    this -> type = src.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal Animal::operator=(const Animal &src)
{
    this -> type = src.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "Animal makeSound() function called" << std::endl;
}

std::string Animal::getType() const
{
    return (this -> type);
}