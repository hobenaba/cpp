/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:55:16 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/13 16:04:49 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this -> type = type;
}
const std::string &Weapon::getType()
{
    return (this -> type);
}
void Weapon::setType(std::string new_weapon)
{
    this -> type = new_weapon;
}