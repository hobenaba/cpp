/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:00:48 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/17 14:07:03 by hobenaba         ###   ########.fr       */
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
Dog &Dog::operator=(const Dog &src)
{
    this -> type = src.type;
    delete this -> brain;
    this -> brain = new Brain(*src.brain);
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

void Dog::setBrain(int idx, int type, std::string str)
{
    brain->setIdea(idx, type, str);
}
void Dog::getBrain(int idx, int type)
{
    brain ->getIdea(idx, type);
}