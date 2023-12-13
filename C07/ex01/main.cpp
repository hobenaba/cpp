/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:26:48 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/13 16:32:22 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>

void addOne(T x)
{
    std::cout << x + 1 << std::endl;
}

template <typename T>

void print(T x)
{
    std::cout << x << std::endl;
}

int main ()
{
    int arr[] = {1, 2, 3, 4, 5};
    ::iter(arr, 5, addOne);
    
    std::string str[] = {"hi", "its", "me"};
    ::iter(str, 3, print);
}