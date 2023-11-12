/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:39:26 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 12:46:48 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;
    
    std::cout << "--------SECOND PART --------" << std::endl;
    
    const WrongAnimal* a = new WrongAnimal();
    const WrongAnimal* b = new WrongCat();
    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    a->makeSound();
    b->makeSound(); 

    delete a;
    delete b; 
}