/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:52:55 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/13 16:04:28 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_hpp
#define Weapon_hpp

#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string name);
        const std::string &getType();
        void    setType(std::string new_weapon);
};

#endif