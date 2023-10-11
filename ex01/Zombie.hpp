/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:00:25 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/11 16:00:28 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private: 
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void set_name(std::string name);
        void announce(void);
};
Zombie*    zombieHorde(int N, std::string name);
#endif