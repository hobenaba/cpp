/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:48:14 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/13 16:15:45 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

void iter(T array[], int length, void (*func)(T))
{
    int i = -1;
    (void)array;
    while (++i < length)
        (func)(array[i]);
}