/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:41:34 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 13:15:16 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    int i = -1;
    
    animals[0]->makeSound();
    animals[3]->makeSound();
    
    while (++i < 4)
        delete animals[i];
}