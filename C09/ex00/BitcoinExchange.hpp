/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:28:59 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/24 16:02:22 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>

class Btc
{
    private:
        std::map<std::string, std::string> data;
        void processLine(std::string line);
    public:
        Btc();
        Btc(const Btc &src);
        Btc &operator=(const Btc &src);

        ~Btc();

        Btc(std::string fileName);
};