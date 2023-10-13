/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:11:23 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/13 18:27:15 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main (int ac, char **av)
{
    if (ac == 4)
    {
        Sed _sed(av);
        _sed.OpenFile();
    }
    else
        return (std::cout << "Not the right format" << std::endl, 
            std::cout << "format : <filename> <to_find> <replace_with>"
                << std::endl, 0);
}