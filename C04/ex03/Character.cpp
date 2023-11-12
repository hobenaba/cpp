/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:58:11 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 23:16:22 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
    int i = -1;

    while (++i < 4)
        this -> _inventory[i] = NULL;
    std::cout << "Character " << _name << " created" << std::endl;
}
Character::Character(std::string name) : _name(name)
{
    int i = -1;

    while (++i < 4)
        this -> _inventory[i] = NULL;
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
        delete _inventory[i];
    std::cout << "Character " << _name << " destroyed" << std::endl;
}

Character Character::operator=(const Character &src)
{
    int i = -1;

    this -> _name = src._name;
    while (++i < 4)
    {
        delete this -> _inventory[i];
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

    while (++i < 4)
    {
        if (this -> _inventory[i] == NULL)
        {
            std::cout << "Character " << _name << " equipped with "
                << m->getType() << std::endl; 
            this -> _inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    //what should i do here!!! i mustnt delete in unequip!
    if (idx >= 0 && idx < 4 && this -> _inventory[idx])
    {
        delete this -> _inventory[idx];
        this -> _inventory[idx] = NULL;
        std::cout << "Character " << _name << " was unequipped" << std::endl;
    }
    else
        std::cout << "Character " << _name << " can't unequip" << std::endl;

}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this -> _inventory[idx])
        std::cout << "Character " << target.getName() << " uses " << this ->_inventory[idx]->getType();
    else
        std::cout << "Character " << target.getName() << " can't use" << std::endl;
}