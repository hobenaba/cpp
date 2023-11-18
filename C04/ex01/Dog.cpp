/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:00:48 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/18 15:38:57 by mac              ###   ########.fr       */
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
    this -> brain = NULL;
    *this = src;
}
Dog &Dog::operator=(const Dog &src)
{
    this -> type = src.type;
    if (this -> brain)
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