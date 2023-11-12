/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:10:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 18:42:49 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {};

AMateria::AMateria() : _type("") {};

AMateria::~AMateria() {};

AMateria::AMateria(const AMateria &src)
{
    this -> _type = src._type;
}

AMateria &AMateria::operator=(const AMateria &src)
{
    this -> _type = src._type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria uses " << this -> _type << " on " << target.getName();
}
