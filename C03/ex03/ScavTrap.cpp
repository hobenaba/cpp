/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:31:32 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/04 17:31:33 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "<ScavTrap> default constructor is called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout <<  "<ScavTrap> " << name << " is constructed" << std::endl;    
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "<ScavTrap> copy constructor is called" << std::endl;
}
ScavTrap ScavTrap::operator=(const ScavTrap &src)
{
    ClapTrap::operator=(src);
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "<ScavTrap> destructor is called" << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
    if (this -> _energyPoints > 0 && this -> _hitPoints > 0)
       {
              std::cout << "<ScavTrap> " << this -> _name << " attacks " << target
                     << " causing " << this -> _attackDamage << " points of Damage" << std::endl;
              this -> _energyPoints--;
       }
       else
              std::cout << "<ScavTrap> " << this -> _name  << " can't attack" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "<ScavTrap> " << _name << " is now in Gate keeper mode." << std::endl;
}