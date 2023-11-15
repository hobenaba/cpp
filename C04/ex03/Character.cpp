/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:58:11 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/15 01:38:23 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <unistd.h>

Character::Character() : _name("")
{
    int i = -1;

    while (++i < 4)
    {
        this -> _inventory[i] = NULL;
        this -> _save[i] = NULL;
    }
    std::cout << "Character " << _name << " created" << std::endl;
}
Character::Character(std::string name) : _name(name)
{
    int i = -1;
    while (++i < 4)
    {
        this -> _inventory[i] = NULL;
        this -> _save[i] = NULL;
    }
    std::cout << "Character " << _name << " created" << std::endl;
}
Character::Character(const Character &src)
{
    *this = src;
}
Character::~Character()
{
    int i = -1;
    
    while (++i < 4)
    {
        delete _inventory[i];
        delete this -> _save[i];
    }
    std::cout << "Character " << _name << " destroyed" << std::endl;
}

Character &Character::operator=(const Character &src)
{
    int i = -1;

    this -> _name = src._name;
    while (++i < 4)
    {
        delete this -> _inventory[i];
        if (src._inventory[i])
            this -> _inventory[i] = src._inventory[i]->clone();
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (this -> _name);
}

void Character::equip(AMateria* m)
{
    int i = -1;

    while (this -> _save[i])
        delete this -> _save[i];
    while (++i < 4)
    {
        if (m != NULL && this -> _inventory[i] == NULL)
        {
            std::cout << "Character " << _name << " equipped with "
                << m->getType() << std::endl; 
            this -> _inventory[i] = m -> clone();
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this -> _inventory[idx])
    {
        int i = -1;

        while (++i < 4)
        {
            if (this -> _save[i] == NULL)
            {
                this -> _save[i] = this -> _inventory[idx];
                break;
            }
        }
        this -> _inventory[idx] = NULL;
        std::cout << "Character " << _name << " unequipped" << std::endl;
    }
    else
        std::cout << "Character " << _name << " can't unequip" << std::endl;

}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this -> _inventory[idx])
    {
        std::cout << "Character " << this -> _name << " can't use" << std::endl;
        this -> _inventory[idx] -> use(target);
    }
    else
        std::cout << "Character " << this -> _name << " can't use" << std::endl;
}