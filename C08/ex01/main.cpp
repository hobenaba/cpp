/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:02:31 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/20 16:17:54 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
    try{
        Span sp = Span(5);
        //sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------test2----" << std::endl;

    try
    {
        std::vector<int> numbers;
        
        int i = -1;

        while (++i < 10000)
            numbers.push_back(i);
        Span test(numbers.size());
        test.addNumber(numbers);
        std::cout << test.shortestSpan() << std::endl;
        std::cout << test.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}