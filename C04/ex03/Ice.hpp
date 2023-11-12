/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:20:14 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 22:40:33 by hobenaba         ###   ########.fr       */
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
        Ice operator=(const Ice &src);

        AMateria* clone() const;
        void use(ICharacter& target);
};
#endif