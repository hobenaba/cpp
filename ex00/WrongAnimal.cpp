/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:35:42 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 11:35:43 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
 
WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal WrongAnimal::operator=(const WrongAnimal &src)
{
    this -> type = src.type;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makeSound() function called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this -> type);
}