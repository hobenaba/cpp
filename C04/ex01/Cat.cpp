/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:12:34 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/18 15:39:58 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "default constructor for " << type << " was called" << std::endl;
    this -> brain = new Brain(); 
}
Cat::Cat(const Cat &src) : Animal(src.type)
{
    std::cout << "copy constructor for " << type << " was called" << std::endl;
    this -> brain = NULL;
    *this = src;
}
Cat &Cat::operator=(const Cat &src)
{
    this -> type = src.type;
    if (this -> brain)
        delete this -> brain;
    this -> brain = new Brain(*src.brain);
    return *this;
}
Cat::~Cat()
{
    std::cout << "destructor for " << type << " was called" << std::endl;
    delete this -> brain;
}
void Cat::makeSound() const
{
    std::cout << "MEOW!!!" << std::endl;
}

void Cat::setBrain(int idx, int type, std::string str)
{
    brain->setIdea(idx, type, str);
}
void Cat::getBrain(int idx, int type)
{
    brain ->getIdea(idx, type);
}