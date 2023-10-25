/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:00:13 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/25 11:35:33 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int i = -1;

    Zombie *zombies = zombieHorde(5, "test");
    while (++i < 5)
        zombies[i].announce();
    delete [] zombies;
}