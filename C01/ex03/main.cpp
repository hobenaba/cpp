/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:51:44 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/25 14:21:06 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("knife");
        bob.attack();
    }
    {
        HumanB jim("Jim");
        Weapon club = Weapon("crude spiked club");
        jim.setWeapon(club);
        jim.attack();
        club.setType("knife");
        jim.attack();
    }
    return 0;
}