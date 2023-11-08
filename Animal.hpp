/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:54:02 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 11:26:13 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &src);
        Animal operator=(const Animal &src);
        ~Animal();
        virtual void makeSound() const;
        virtual std::string getType() const;
};

#endif