/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:28:47 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/24 15:55:49 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
    (void)av;
    
    if (ac != 2)
        return (std::cout << "Error\n./btc <file>", 1);
    try{
        Btc Data("data.csv");    
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}