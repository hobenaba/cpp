/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:29:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/25 14:58:09 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string level;

    level = "";
    while (level != "exit")
    {
        std::cout << "enter level : ";
        std::getline(std::cin, level);
        if(std::cin.eof())
            exit (EXIT_SUCCESS);
        if (level.empty())
            std::cout << "invaid input, try again !" << std::endl;
        else
            harl.complain(level);
    }
}