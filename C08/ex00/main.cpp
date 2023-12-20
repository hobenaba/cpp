/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:17:22 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/20 19:39:07 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main ()
{
    std::vector<int> numbers;
    std::vector<int>::iterator it;
    int i = 0;

    while (++i < 10)
        numbers.push_back(i * i);
    
    it = numbers.begin() - 1;
    while (++it < numbers.end())
        std::cout << *it << std::endl;

    easyfind(numbers, 1);
    easyfind(numbers, 0);
    easyfind(numbers, -11);
}