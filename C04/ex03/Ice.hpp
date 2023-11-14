/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:20:14 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/14 23:14:43 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        ~Ice();

        Ice(const Ice &src);
        Ice &operator=(const Ice &src);

        AMateria* clone() const;
        void use(ICharacter& target);
};
#endif