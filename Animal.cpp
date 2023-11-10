/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:50:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 12:03:35 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("animal")
{
    std::cout << "default constructor for " << type << " was called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "constructor for " << type << " was called" << std::endl;
}
Animal::Animal(const Animal &src)
{
    this -> type = src.type;
    std::cout << "copy constructor for " << type << " was called" << std::endl;
}
Animal Animal::operator=(const Animal &src)
{
    this -> type = src.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "destructor for " << type << " was called" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "makeSound() function was called" << std::endl;
}