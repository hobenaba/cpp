/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:42:36 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 12:43:40 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP  

#include <iostream>

class Animal {
    protected :
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &src);
        Animal operator=(const Animal &src);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
};

#endif