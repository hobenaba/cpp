/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:47:06 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/18 15:59:20 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = -1;
    
    while (++i < 4)
        this -> materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    int i = -1;
    
    while (++i < 4)
    {
        if (this -> materia[i])
            delete this -> materia[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    int i = -1;
    
    while (++i < 4)
        this -> materia[i] = NULL;
    *this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
    int i = -1;

    while (++i < 4)
    {
        if (this -> materia[i])
            delete this -> materia[i];
        this ->materia[i] = src.materia[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = -1;
    
    while (++i < 4)
    {
        if (materia[i] == NULL)
        {
            materia[i] = m -> clone();
            break;
        }
    }
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = -1;
    while (++i < 4)
    {
        if (materia[i] && materia[i]->getType() == type)
            return materia[i]->clone();
    }
    return NULL;
}