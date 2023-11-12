/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:11:07 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 17:20:04 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private :
        Brain *brain;
    public :
        Cat();
        Cat(const Cat &src);
        Cat operator=(const Cat &src);
        ~Cat();
        void makeSound() const;
} ;
#endif