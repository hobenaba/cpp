/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:21:48 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 11:25:05 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(const Cat &src);
        Cat operator=(const Cat &src);
        ~Cat();
        void makeSound() const;
        std::string getType() const;
};

#endif