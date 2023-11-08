/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:22:12 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 15:28:32 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
 
Cat::Cat()
{
    Animal::type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    this -> type = src.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat Cat::operator=(const Cat &src)
{
    this -> type = src.type;
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

std::string Cat::getType() const
{
    return (this -> type);
}