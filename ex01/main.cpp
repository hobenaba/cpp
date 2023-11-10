/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:39:26 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 17:43:34 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    int i = -1;
    while (++i < 4)
        animals[i] -> makeSound();
    i = -1;
    while (++i < 4)
        delete animals[i];
}
//check leaks