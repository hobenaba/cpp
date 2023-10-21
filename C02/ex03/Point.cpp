/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:26:56 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/21 18:51:59 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){};
Point::Point(const float x, const float y) : x(x) , y(y) {};
Point::Point(const Point &src) : x(src.x) , y(src.y) {};
Point::~Point()
{
    // std::cout << "destructor called" << std::endl;
}
Point  &Point::operator=(const Point &src)
{
    (Fixed)this -> x = src.getX();
    (Fixed)this -> y = src.getY();
    return (*this);
}
 Fixed Point::getX() const
{
    return (this -> x);
}
Fixed Point::getY() const
{
    return (this -> y);
}