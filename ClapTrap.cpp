/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:07:38 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/23 19:00:58 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name("default")
{
    std::cout << "ClapTrap the Default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name(name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    this -> _hitPoints = src._hitPoints;
    this -> _name = src._name;
    this -> _energyPoints = src._energyPoints;
    this -> _attackDamage = src._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    this -> _hitPoints = src._hitPoints;
    this -> _name = src._name;
    this -> _energyPoints = src._energyPoints;
    this -> _attackDamage = src._attackDamage;
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this ->_energyPoints <= 0 || this -> _hitPoints <= 0)
        std::cout << "ClapTrap " <<this -> _name << " cannot attack " << target << std::endl;
    else
    {
        std::cout << "ClapTrap " << this -> _name << " attack " << target << " causing " << this -> _attackDamage 
            << " points of damage" << std::endl;;
        this->_energyPoints--;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this -> _energyPoints == 0 || amount + this -> _hitPoints > 10)
    {
        if (this -> _energyPoints == 0)
            std::cout << "ClapTrap " << this -> _name << " have no energy to be repaired" << std::endl;
        else
            std::cout << "ClapTrap " << this -> _name  << " have more than enough hit points for him to be repaired" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this -> _name << " is to be repaired by " 
        << amount << " hit points" << std::endl;
    this -> _hitPoints += amount;
    this -> _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this -> _hitPoints < amount)
    {
        std::cout << "ClapTrap " << this -> _name << " is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this -> _name << " has been damaged by " 
        << amount << " hit points" << std::endl;
    this -> _hitPoints -= amount;
}