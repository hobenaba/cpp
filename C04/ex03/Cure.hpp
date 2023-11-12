/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:46:55 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 22:41:16 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        ~Cure();

        Cure(const Cure &src);
        Cure operator=(const Cure &src);

        AMateria* clone() const;
        void use(ICharacter& target);
};
#endif