/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:14:41 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/27 16:28:12 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap ash( "Ash" );
    //DiamondTrap ash2( ash );
    //DiamondTrap ash3(".");

    ash.whoAmI();
    //ash2.whoAmI();
    //ash3 = ash;
    //ash3.whoAmI();

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    exit (0);
    return EXIT_SUCCESS;
}