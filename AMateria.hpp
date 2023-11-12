/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:38:35 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 21:45:15 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected:
            std::string _type;
    public:
        AMateria(std::string const & type);
        AMateria();
        AMateria(const AMateria &src);
        AMateria &operator=(const AMateria &src);
        virtual ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
};
#endif