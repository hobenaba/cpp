/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:31:43 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/02 18:07:49 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int FixedNumber;
        static const int FractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &src);
        Fixed & operator=(const Fixed &src);
        Fixed & operator++();
        Fixed  operator++(int);
        Fixed & operator--();
        Fixed  operator--(int);
        Fixed   operator*(const Fixed &src);
        Fixed   operator+(const Fixed &src);
        Fixed   operator-(const Fixed &src);
        Fixed   operator/(const Fixed &src);
        bool   operator>(const Fixed &src) const;
        bool   operator>=(const Fixed &src) const;
        bool   operator<(const Fixed &src) const;
        bool   operator<=(const Fixed &src) const;
        bool   operator==(const Fixed &src) const;
        bool   operator!=(const Fixed &src) const;
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed(const int num);
        Fixed(const float num);
        float toFloat(void) const;
        int toInt(void) const;
        static Fixed &min(Fixed &n1, Fixed &n2);
        static const Fixed &min(const Fixed &n1, const Fixed &n2);
        static Fixed &max(Fixed &n1, Fixed &n2);
        static const Fixed &max(const Fixed &n1, const Fixed &n2);
};

std::ostream & operator<<(std::ostream &o, const Fixed &src);

#endif