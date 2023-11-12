/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:12:34 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 17:40:13 by hobenaba         ###   ########.fr       */
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
    *this = src;
}
Cat Cat::operator=(const Cat &src)
{
    this -> type = src.type;
    this -> brain = new Brain(*this -> brain);
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
