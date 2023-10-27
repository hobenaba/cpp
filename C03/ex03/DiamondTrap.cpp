/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:05:04 by mac               #+#    #+#             */
/*   Updated: 2023/10/27 17:23:56 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "<DiamondTrap> default constructor is called" << std::endl;
	this -> _hitPoints = 100;
	this -> _attackDamage = 30;
	this -> _name = "default";
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "<DiamondTrap> constructor is called" << std::endl;
	this -> _name = name;
	this -> _hitPoints = 100;
	this -> _attackDamage = 30;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src) {};

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
	ClapTrap::operator=(src);
	return (*this);
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "<DiamondTrap> destructor called" << std::endl; 
}
void DiamondTrap::whoAmI()
{
	std::cout << "<DiamondTrap> i go by " << this -> _name << " ,my ClapTrap name is " << ClapTrap::_name << std::endl;
}