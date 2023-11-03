/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:53:11 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/03 16:15:24 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
       std::cout << "<ClapTrap> default constructor is called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
       std::cout <<  "<ClapTrap> " << name << " is constructed" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
       std::cout << "<ClapTrap> copy constructor is called" << std::endl;
}
ClapTrap ClapTrap::operator=(const ClapTrap &src)
{
       this -> _name = src._name;
       this -> _attackDamage = src._attackDamage;
       this ->_hitPoints = src._hitPoints;
       this ->_energyPoints = src._energyPoints;
       return *this;
}
ClapTrap::~ClapTrap()
{
       std::cout << "<ClapTrap> destructor is called" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
       if (this -> _energyPoints > 0 && this -> _hitPoints > 0)
       {
              std::cout << "<ClapTrap> " << this -> _name << " attacks " << target
                     << " causing " << this -> _attackDamage << " points of Damage" << std::endl;
              this -> _energyPoints--;
       }
       else
              std::cout << "<ClapTrap> " << this -> _name  << " can't attack" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
       if(this -> _hitPoints - amount >= 0)
       {
              std::cout << "<ClapTrap> " << this -> _name << " have taken a damage of " << amount << std::endl;
              this -> _hitPoints -= amount;
       }
       else
              std::cout << "<ClapTrap> " << this -> _name << " is dead, so STOP!!!!!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
       if (this -> _energyPoints > 0 && this -> _hitPoints > 0)
       {
              std::cout << "<ClapTrap> " << this -> _name << " have been repaired by " << amount << std::endl;
              this -> _hitPoints += amount;
       }
}