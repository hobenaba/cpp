/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:36:32 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/15 01:32:27 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int _main()
{

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src -> learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    //me->equip(tmp);
    //tmp = src->createMateria("cure");
    me->equip(tmp);
    me->equip(tmp);
    delete me;
    return 0;
    me -> equip(tmp);
    me -> unequip(1);
    me -> unequip(0);
    me -> unequip(7);
    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}
//check leaks at last
int main()
{
    _main();
    //while(1);
}