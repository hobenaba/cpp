/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:33:59 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 12:35:10 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONG_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public :
        WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat operator=(const WrongCat &src);
        ~WrongCat();
        void makeSound() const;
} ;
#endif