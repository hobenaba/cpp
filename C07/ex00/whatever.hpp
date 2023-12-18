/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:30:18 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/18 12:52:57 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

void swap(T &x, T &y)
{
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>

//do we have the right to use teranry operators.
T min(T &x, T &y)
{
    return ((x < y) ? x : y);
}

template <typename T >

T max(T &x, T &y)
{
    return ((x > y) ? x : y);
}