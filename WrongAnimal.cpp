/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:33:05 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 12:33:08 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "default constructor for WrongAnimal was called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "constructor for WrongAnimal was called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    this -> type = src.type;
    std::cout << "copy constructor for WrongAnimal was called" << std::endl;
}
WrongAnimal WrongAnimal::operator=(const WrongAnimal &src)
{
    this -> type = src.type;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "destructor for WrongAnimal was called" << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makeSound() was called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this -> type);
}