/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:00:19 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/11 16:00:21 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}
void Zombie::set_name(std::string name)
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