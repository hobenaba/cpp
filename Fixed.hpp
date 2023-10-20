/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:31:43 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/20 17:58:45 by hobenaba         ###   ########.fr       */
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
        static int &min(int &n1, int &n2);
        static int &min(const int &n1, const int &n2);
        static int &max(int &n1, int &n2);
        static int &max(const int &n1, const int &n2);
};

#endif