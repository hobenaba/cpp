/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:02:27 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/25 18:19:46 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap()
{
   std::cout << "<DiamondTrap> default constructor called" << std::endl;
   std::cout << _hitPoints << std::endl;
   exit (0);
}
DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_name") {};

// DiamondTrap::DiamondTrap(const DiamondTrap &src) : ScavTrap(src);
// DiamondTrap &DiamondTrap::operator=(const &DiamondTrap src);
DiamondTrap::~DiamondTrap()
{
    std::cout << "<DiamonTrap> destructor called" << std::endl;
}
// void DiamondTrap::whoAmI();