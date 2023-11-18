/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:00:48 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/18 15:26:36 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "default constructor for " << type << " was called" << std::endl;
}
Dog::Dog(const Dog &src) : Animal(src.type)
{
    std::cout << "copy constructor for " << type << " was called" << std::endl;
}
Dog &Dog::operator=(const Dog &src)
{
    this -> type = src.type;
    return *this;
}
Dog::~Dog()
{
    std::cout << "destructor for " << type << " was called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "WOOF!!!" << std::endl;
}