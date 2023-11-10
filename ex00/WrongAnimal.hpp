/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:30:34 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 12:32:24 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP  

#include <iostream>

class WrongAnimal {
    protected :
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal operator=(const WrongAnimal &src);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};

#endif