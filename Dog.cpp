/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:16:58 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 15:28:45 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
 
Dog::Dog()
{
    Animal::type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
    this -> type = src.type
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog Dog::operator=(const Dog &src)
{
    this -> type = src.type;
    return *this;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

std::string Dog::getType() const
{
    return (this -> type);
}