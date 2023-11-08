/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:41:34 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 11:57:39 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;
    
    // const WrongAnimal *wrong = new WrongAnimal();
    // const WrongAnimal *wrongCat = new WrongCat();

    // std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    // std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    // wrong->makeSound();
    // wrongCat->makeSound();

    // delete  wrong;
    // delete  wrongCat;
    // return 0;
}