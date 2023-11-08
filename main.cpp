/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:41:34 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 11:38:28 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    std::cout << "--------------- Animal ---------------" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;

    std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrong;
    delete  wrongCat;
    return 0;
}

// Animel constructor called
// Animal Dog constructor called
// Dog constructor called
// Animal Cat constructor called
// Cat constructor called
// J Type: Dog 
// I Type: Cat 
// Meow!
// Animal makeSound called
// Animal destructor called
// Dog destructor called
// Animal destructor called
// Cat destructor called
// Animal destructor called

// ------------- Wrong Animal -------------
// WrongAnimel constructor called
// WrongAnimal WrongCat constructor called
// WrongCat constructor called
// Wrong Type: WrongAnimel 
// WrongCat Type: WrongCat 
// WrongAnimal makeSound called
// WrongAnimal makeSound called
// WrongAnimal destructor called
// WrongAnimal destructor called