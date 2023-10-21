/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:31:43 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/20 18:12:59 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int FixedNumber;
        static const int FractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &src);
        Fixed & operator=(const Fixed &src);
        Fixed & operator++();
        Fixed  operator++(int);
        Fixed & operator--();
        Fixed  operator--(int);
        friend Fixed   operator*(const Fixed &src1, const Fixed &src2);
        friend Fixed   operator+(const Fixed &src1, const Fixed &src2);
        friend Fixed   operator-(const Fixed &src1, const Fixed &src2);
        friend Fixed   operator/(const Fixed &src1, const Fixed &src2);
        friend bool   operator>(const Fixed &src1, const Fixed &src2);
        friend bool   operator>=(const Fixed &src1, const Fixed &src2);
        friend bool   operator<(const Fixed &src1, const Fixed &src2);
        friend bool   operator<=(const Fixed &src1, const Fixed &src2);
        friend bool   operator==(const Fixed &src1, const Fixed &src2);
        friend bool   operator!=(const Fixed &src1, const Fixed &src2);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed(const int num);
        Fixed(const float num);
        float toFloat(void) const;
        int toInt(void) const;
        friend std::ostream & operator<<(std::ostream &o, const Fixed &src);
        static Fixed &min(Fixed &n1, Fixed &n2);
        static Fixed &min(const Fixed &n1, const Fixed &n2);
        static Fixed &max(Fixed &n1, Fixed &n2);
        static Fixed &max(const Fixed &n1, const Fixed &n2);
};

#endif