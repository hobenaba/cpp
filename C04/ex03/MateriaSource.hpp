/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:44:04 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/14 23:15:20 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria *materia[4];
    public:
        MateriaSource();
        ~MateriaSource();

        MateriaSource(const MateriaSource &src);
        MateriaSource &operator=(const MateriaSource &src);
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif