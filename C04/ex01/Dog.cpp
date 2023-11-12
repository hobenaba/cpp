/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:00:48 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 17:39:45 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "default constructor for " << type << " was called" << std::endl;
    this -> brain = new Brain(); 
}
Dog::Dog(const Dog &src) : Animal(src.type)
{
    std::cout << "copy constructor for " << type << " was called" << std::endl;
    *this = src;
}
Dog Dog::operator=(const Dog &src)
{
    this -> type = src.type;
    this -> brain = new Brain(*this -> brain);
    return *this;
}
Dog::~Dog()
{
    std::cout << "destructor for " << type << " was called" << std::endl;
    delete this -> brain;
}
void Dog::makeSound() const
{
    std::cout << "WOOF!!!" << std::endl;
}