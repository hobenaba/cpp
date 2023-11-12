/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:26:36 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 20:27:37 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {};

Cure::Cure(std::string type) : AMateria(type) {};
Cure::~Cure() {};

Cure::Cure(const Cure &src) : AMateria(src._type) {};

Cure &Cure::operator=(const Cure &src)
{
    this -> _type = src._type;
    return (*this);   
}

AMateria* Cure::clone() const
{
    return (new Cure(this -> _type));
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}