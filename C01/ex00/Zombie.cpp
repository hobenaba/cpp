/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:57:52 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/11 15:57:54 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this -> name = name;
}

Zombie::~Zombie()
{
    std::cout << "zombie " << this -> name << " have been destroyed" << std::endl;

}

void Zombie::announce()
{
    std::cout << this -> name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}