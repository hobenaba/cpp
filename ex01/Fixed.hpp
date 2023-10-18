/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:06:46 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/18 19:12:37 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private :
        int FixedNumber;
        static const int FractionalBits = 8;
    public :
        Fixed();
        Fixed(const Fixed &src);
        Fixed(const int num);
        Fixed(const float num);
        float toFloat(void) const;
        int toInt(void) const;
        Fixed &operator=(const Fixed &src);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        friend std::ostream & operator<<(std::ostream & o, const Fixed & src);
}  ;
#endif