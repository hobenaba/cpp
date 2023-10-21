/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:52:42 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/21 19:07:29 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed abs(Fixed area)
{
    if (area < 0)
        area = area * -1;
    return (area * 1/2);
}
Fixed area(Point const a, Point const b, Point const c)
{   
    Fixed area = abs(a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));
    return (area);
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed areaABP = area(a, b, point);
    Fixed areaACP = area(a, c, point);
    Fixed areaBCP = area(b, c, point);
    Fixed areaABC = area(a, b, c);
    
    if (areaABP + areaACP + areaBCP == areaABC && areaABP != 0 && areaACP != 0 && areaBCP != 0)
        return (true);
    return (false);
}