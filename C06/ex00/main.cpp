/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:55:36 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/09 17:51:31 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
    if (ac == 2)
    {
        ScalarConverter::convert(av[1]);
        return (0);
    }  
    std::cout << "wrong format => ./convert literal" << std::endl; 
    return (1);       
}