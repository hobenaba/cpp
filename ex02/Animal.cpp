/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:50:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 19:18:43 by hobenaba         ###   ########.fr       */
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
    this -> type = src.type;
    std::cout << "copy constructor for animal was called" << std::endl;
}
Animal &Animal::operator=(const Animal &src)
{
    this -> type = src.type;
    return *this;
}
// how did this work, abstract classes, arent supposed to get initialized
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