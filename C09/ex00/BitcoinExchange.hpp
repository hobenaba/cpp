/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:28:59 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/24 17:34:53 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>


class Btc
{
    private:
        std::map<std::string, std::string> data;
        std::pair<std::string, float> input;
        void processLine(std::string line);
        void processError(char *ptr);
    public:
        Btc();
        Btc(const Btc &src);
        Btc &operator=(const Btc &src);
        ~Btc();

        Btc(std::string fileName);

        void run(const char *input);
};