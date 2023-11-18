/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:50:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/18 15:25:25 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("animal")
{
    std::cout << "default constructor for animal was called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "constructor for animal was called" << std::endl;
}
Animal::Animal(const Animal &src)
{
    *this = src;
    std::cout << "copy constructor for animal was called" << std::endl;
}
Animal &Animal::operator=(const Animal &src)
{
    this -> type = src.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "destructor for animal was called" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "animal makeSound() was called" << std::endl;
}

std::string Animal::getType() const
{
    return (this -> type);
}