/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:53:36 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/21 16:52:27 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0) , y(0) {};

Point::Point(float const x, float const y) : x(x), y(y) {};

Point::Point(Point const &src) : x(src.x) , y(src.y){};

Point  &Point::operator=(Point const &src)
{
    static Point a(src.x, src.y);
    return (a);
}
Point::~Point()
{
    //std::cout << "destructor called" << std::endl;
}

int Point::difference(Point a, Point b, int type)
{
    if (type == 1)
        return (b.x - a.x);
    else    
        return (b.y - a.y);
}