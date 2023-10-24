/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:02:09 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/24 15:05:28 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "<ScavTrap> default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "<ScavTrap> constructor called" << std::endl;
} 

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {};

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    ClapTrap::operator=(src);
    return (*this);   
}

ScavTrap::~ScavTrap()
{
    std::cout << "<ScavTrap> Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "<ScavTrap> is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "<ScavTrap> attacks " << target << " causing " << _attackDamage << " Points of damage" << std::endl;
}