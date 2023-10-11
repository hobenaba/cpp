/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:58:12 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/11 15:58:14 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private: 
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
};
Zombie* newZombie( std::string name);
void    randomChump(std::string name);
#endif