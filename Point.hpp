/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:49:30 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/21 16:52:36 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point {
    private:
        int const x;
        int const y;
    public:
        Point();
        Point(float const x, float const y);
        Point(Point const &src);
        Point  &operator=(Point const &src);
        ~Point();
        static int difference(Point a, Point b, int type);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif