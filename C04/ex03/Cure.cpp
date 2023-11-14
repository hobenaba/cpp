/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:41:23 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/14 23:14:16 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {};

Cure::~Cure() {};

Cure::Cure(const Cure &src)
{
    *this = src;
}

AMateria* Cure::clone() const
{
    return new Cure();
}

Cure &Cure::operator=(const Cure &src)
{
    this -> _type = src._type;
    return  *this;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}