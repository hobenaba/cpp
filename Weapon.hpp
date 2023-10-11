ee/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:07:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/11 16:33:27 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon {
    private:
        std::string type;
    public:
        Weapon (std::string weapon);
        const std::string &getType();
        void setType();
};

#endif