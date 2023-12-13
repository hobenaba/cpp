/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:49:33 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/13 16:16:05 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>

void addUp(T x)
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
    int arr[] = {1, 2, 3, 4, 5, 6};
    ::iter(arr, 6, addUp);

    std::string str[]={"s1", "s2", "s3"};
    ::iter(str, 3, print);
}