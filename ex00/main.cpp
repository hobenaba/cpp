/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:57:33 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/11 15:57:34 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    std::string name;
    std::cout << "creating a zombie on the stack" << std::endl;
    std::cout << "zombie name : ";
    std::cin >> name;
    Zombie szombie(name);
    std::cout << "creating a zombie on the heap" << std::endl;
    std::cout << "zombie name : ";
    std::cin >> name;
    Zombie *hzombie = newZombie(name);
    hzombie -> announce();
    delete hzombie;
    std::cout << "calling randomChump()" << std::endl;
    randomChump("random");
}