/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:21:15 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/14 23:14:48 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {};

Ice::~Ice() {};

Ice::Ice(const Ice &src)
{
    *this = src;
}

AMateria* Ice::clone() const
{
    return new Ice();
}

Ice &Ice::operator=(const Ice &src)
{
    this -> _type = src._type;
    return  *this;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}