/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:26:00 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 20:26:26 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &src);
        Cure(std::string type);
        Cure &operator=(const Cure &src);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif