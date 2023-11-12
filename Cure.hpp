/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:46:55 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 21:51:14 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        ~Cure()

        Cure(const Cure &src);
        Cure operator=(const Cure &src);

        AMateria* clone() const = 0;
        void use(ICharacter& target);
}
#endif