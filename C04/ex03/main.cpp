/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:36:32 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/12 23:20:08 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(0);
    me-> unequip(7);
    

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}
// AMateria ice created
// AMateria cure created
// Character me created
// AMateria ice created
// Character me equipped with ice
// AMateria cure created
// Character me equipped with cure
// AMateria ice destroyed
// Character me unequipped
// Character me can't unequip
// Character bob created
// Character me can't use
// * heals bob's wounds *
// Character me uses cure
// Character bob destroyed
// Character me destroyed
// AMateria cure destroyed
// AMateria ice destroyed
// AMateria cure destroyed