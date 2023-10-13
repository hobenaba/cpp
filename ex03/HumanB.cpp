/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:57:47 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/13 18:01:07 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{  
    this -> weapon = NULL;
};

void HumanB::setWeapon(Weapon &weapon)
{
    this -> weapon = &weapon;
}
void HumanB::attack()
{
    if (this -> weapon == NULL || weapon ->getType() == "")
        std::cout << this -> name << " have no weapon to attack with" << std::endl;
    else
        std::cout << this -> name << " attacks with their " << weapon -> getType() << std::endl;
}