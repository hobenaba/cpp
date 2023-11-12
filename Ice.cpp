/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:30:02 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 18:47:07 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {};

Ice::Ice(std::string type) : AMateria(type) {};
Ice::~Ice() {};

Ice::Ice(const Ice &src) : AMateria(src._type) {};

Ice &Ice::operator=(const Ice &src)
{
    this -> _type = src._type;
    return (*this);   
}

AMateria* Ice::clone() const
{
    return (new Ice(this -> _type));
}
void Ice::use(ICharacter& target)
{
    std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}