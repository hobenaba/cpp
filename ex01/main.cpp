/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:00:13 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/11 16:00:15 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int         n;
    std::string name;
    int i = -1;

    std::cout << "enter the number of zombies : ";
    std::cin >> n;
    std::cout << "enter zombies name : ";
    std::cin >> name;
    Zombie *zombies = zombieHorde(n, name);
    while (++i < n)
        zombies[i].announce();
    delete [] zombies;
}