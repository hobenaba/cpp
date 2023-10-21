/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:37:20 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/21 17:17:25 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main ( void )
{
    // check the returned value its not right
    if ( bsp( Point(-1, 455), Point(10, 30), Point(20, 0), Point(20, 0) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    }
    else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    return 0;
}