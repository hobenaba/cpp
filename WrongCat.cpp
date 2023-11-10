/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:35:22 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 12:36:04 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "default constructor for " << type << " was called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src.type)
{
    std::cout << "copy constructor for " << type << " was called" << std::endl;
}
WrongCat WrongCat::operator=(const WrongCat &src)
{
    this -> type = src.type;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "destructor for " << type << " was called" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "MEOW!!!" << std::endl;
}
