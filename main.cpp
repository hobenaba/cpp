/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:41:34 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 15:13:43 by hobenaba         ###   ########.fr       */
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

// Animal Dog constructor called
// Dog constructor called
// Brain created.
// Animal Dog constructor called
// Dog constructor called
// Brain created.
// Animal Cat constructor called
// Cat constructor called
// Brain created.
// Animal Cat constructor called
// Cat constructor called
// Brain created.
// Woof!
// Meow!
// Brain destroyed.
// Dog destructor called
// Animal destructor called
// Brain destroyed.
// Dog destructor called
// Animal destructor called
// Cat destructor called
// Brain destroyed.
// Animal destructor called
// Cat destructor called
// Brain destroyed.
// Animal destructor called