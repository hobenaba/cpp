/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:17:22 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/20 21:02:39 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main ()
{
    try 
    {

        std::vector<int> numbers;
        std::vector<int>::iterator it;
        int i = -1;

        while (++i < 10)
        numbers.push_back(i * i);

        it = numbers.begin() - 1;
        while (++it < numbers.end())
        std::cout << *it << std::endl;
        
        std::cout << "========" << std::endl;
        std::cout << *easyfind(numbers, 1) << std::endl;
        std::cout << *easyfind(numbers, 0) << std::endl;
        std::cout << *easyfind(numbers, -11) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}