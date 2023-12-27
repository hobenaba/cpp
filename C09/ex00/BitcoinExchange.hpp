/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:28:59 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/27 08:40:13 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <map>


class Btc
{
    private:
        std::map<std::string, float> data;
        std::pair<std::string, float> input;
        void processLine(std::string line);
        void processError(char *ptr);
        void execLine();
    public:
        Btc();
        Btc(const Btc &src);
        Btc &operator=(const Btc &src);
        ~Btc();

        Btc(std::string fileName);

        void run(const char *input);
};