/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:27:41 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 18:47:15 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice();
        ~Ice();
        Ice(const Ice &src);
        Ice(std::string type);
        Ice &operator=(const Ice &src);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif