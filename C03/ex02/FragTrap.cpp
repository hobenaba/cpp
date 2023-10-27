/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:01:41 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/24 15:07:49 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "<FragTrap> default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "<FragTrap> constructor called" << std::endl;
} 

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {};

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    ClapTrap::operator=(src);
    return (*this);   
}

FragTrap::~FragTrap()
{
    std::cout << "<FragTrap> Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "<FragTrap> a positive high fives request" << std::endl;
}