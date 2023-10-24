/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:54:23 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/24 15:15:59 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        FragTrap &operator=(FragTrap const &src);
        ~FragTrap();
        void highFivesGuys(void);
} ;

#endif