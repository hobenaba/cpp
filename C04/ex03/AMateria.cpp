/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:41:28 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 23:17:28 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria " << this -> _type << " created" << std::endl;
}

AMateria::AMateria(): _type("")
{
    std::cout << "AMateria " << this -> _type << " created" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
}

AMateria &AMateria::operator=(const AMateria &src)
{
    this -> _type = src._type;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria " << this -> _type << " destroyed" << std::endl;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria uses " << this -> _type << " on " << target.getName() << std::endl;
}
std::string const & AMateria::getType() const
{
    return (this -> _type);
}