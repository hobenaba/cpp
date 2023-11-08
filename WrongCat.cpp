/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:37:20 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 11:37:24 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
 
WrongCat::WrongCat()
{
    WrongAnimal::type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat WrongCat::operator=(const WrongCat &src)
{
    this -> type = src.type;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

std::string WrongCat::getType() const
{
    return (this -> type);
}