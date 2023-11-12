/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:41:42 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 16:20:57 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    _name = "default";
    ClapTrap::_name = _name + "_clap_name";
    _hitPoints = 100;
    _attackDamage = 30;
    std::cout << "<DiamondTrap> default constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
    _hitPoints = 100;
    _attackDamage = 30;
    std::cout <<  "<DiamondTrap> " << name << " is constructed" << std::endl;    
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src)
{
    std::cout << "<DiamondTrap> copy constructor is called" << std::endl;
}

DiamondTrap DiamondTrap::operator=(const DiamondTrap &src)
{
    ClapTrap::operator=(src);
    return *this;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "<DiamondTrap> destructor is called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "<DiamondTrap> i go by " << _name << " my ClapTrap name is " << ClapTrap::_name << std::endl;
}
