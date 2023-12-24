/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:47:10 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/24 16:11:41 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Btc();
// Btc(const Btc &src);
// Btc &operator=(const Btc &src);

Btc::~Btc() {}

//check this out Canonical Form

void Btc::processLine(std::string line)
{
    //devide my string into substring
    //use substr apparently.
    int a = line.find(',', 0);
    std::string str = line + a;
    std::cout << str << std::endl;

    exit (0);
}
Btc::Btc(std::string fileName)
{
    std::ifstream file (fileName);

    if (file.is_open())
    {
        std::string line;
        std::getline(file, line);
        while (std::getline(file, line))
            processLine(line);
    }
    else
        throw std::runtime_error("data.csv file not found");
}