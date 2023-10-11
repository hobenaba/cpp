/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:08:41 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/11 16:33:49 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>

class HumanA
{
    private :
        std::string Weapon;
        std::string name;
    public :
        HumanA(std::string name, std::string Weapon);
        void attack();
};

#endif