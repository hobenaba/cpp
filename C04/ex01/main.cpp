/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:39:26 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/14 21:46:53 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animals[4] = {new Dog(), new Dog(), new Dog(), new Dog()};
    int i = -1;
    while (++i < 4)
        animals[i] -> makeSound();
    i = -1;
    while (++i < 4)
        delete animals[i];

}
