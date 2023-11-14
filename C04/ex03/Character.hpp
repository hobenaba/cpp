/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:53:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/14 23:41:08 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private :
        std::string _name;
        AMateria *_inventory[4];
        AMateria *_save[4];
    public:
        Character();
        Character(std::string name);
        Character(const Character &src);
        ~Character();
        
        Character &operator=(const Character &src);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
#endif