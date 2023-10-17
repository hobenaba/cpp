/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:29:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/17 15:31:47 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    if (ac != 2)
        return (std::cout << "wrong format" << std::endl, std::cout << "format : ./harlFilter level" << std::endl, 0);
    else
        harl.complain(av[1]);    
}   