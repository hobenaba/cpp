/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:28:47 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/27 11:00:25 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{   
    if (ac != 2)
        return (std::cout << "Error\n./btc <file>", 1);
    try{
        Btc Data("data.csv");    
        Data.run(av[1]);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}