/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:42:11 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/04 18:37:07 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap ash( "Ash" );

    ash.whoAmI();
    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );

    return 0;
}