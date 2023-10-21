/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:59:35 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/21 17:12:46 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed area(Point const c1, Point const c2, Point const c3)
{
    float c1c2 ((float)sqrt(pow(Point::difference(c1, c2, 1), 2) + pow(Point::difference(c1, c2, 2), 2)));
    float c1c3 ((float)sqrt(pow(Point::difference(c1, c3, 1), 2) + pow(Point::difference(c1, c3, 2), 2)));
    float c3c2 ((float)sqrt(pow(Point::difference(c3, c2, 1), 2) + pow(Point::difference(c3, c2, 2), 2)));
    float s((c1c2 + c1c3 + c3c2 / 2));
    Fixed area ((float)sqrt((s * (s - c1c2) * (s - c1c3) * (s - c3c2))));
    return area;
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed areaABP = area(a, b, point);
    Fixed areaACP = area(a, c, point);
    Fixed areaBCP = area(b, c, point);
    Fixed areaABC = area(a, b, c);
    Fixed alpha1 = (areaABP / areaABC);
    Fixed alpha2 = (areaACP / areaABC);
    Fixed alpha3 = (areaBCP / areaABC);
    std::cout << alpha1 << " " << alpha2 << " " << alpha3 << std::endl;
    if ((alpha1 >= 0 && alpha1 <= 1) && (alpha2 >= 0 && alpha2 <= 1) && (alpha3 >= 0 && alpha3 <= 1))
        return (true);
    return (false);
}