/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:12:34 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 12:22:05 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "default constructor for " << type << " was called" << std::endl;
}
Cat::Cat(const Cat &src) : Animal(src.type)
{
    std::cout << "copy constructor for " << type << " was called" << std::endl;
}
Cat Cat::operator=(const Cat &src)
{
    this -> type = src.type;
    return *this;
}
Cat::~Cat()
{
    std::cout << "destructor for " << type << " was called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "MEOW!!!" << std::endl;
}
