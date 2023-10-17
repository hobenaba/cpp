/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:00:31 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/11 16:00:33 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
    int i = -1;

    Zombie *zombies = new Zombie[N];
    while (++i < N)
        zombies[i].set_name(name);
    return(zombies);
};