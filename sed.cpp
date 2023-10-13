/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:24:14 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/13 18:50:00 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(char **av)
{
    this -> filename = av[1];
    this -> s1 = av[2];
    this -> s2 = av[3];
}

std::string Sed::OpenFile()
{
    std::ifstream file(this -> filename);
    std::string line;
    std::stringstream str;
    
    if (file.is_open())
    {
        while (getline(file, line));
        str << line;
    }
    else
        std::cout << "unable to open the file" << std::endl;
    std::cout << str.str() << str.str().length() <<std::endl;
    return (line);
}