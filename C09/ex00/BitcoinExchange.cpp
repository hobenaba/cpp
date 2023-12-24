/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:47:10 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/24 18:07:43 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Btc();
// Btc(const Btc &src);
// Btc &operator=(const Btc &src);

Btc::~Btc() {}

//check this out Canonical Form

void Btc::processError(char *ptr)
{
    char *p;
    if (*ptr)
        throw std::runtime_error("Error: not an int or a float value");
    //check out date should i check it with strtod , find or another method
    exit (0);
}
void Btc::processLine(std::string line)
{
    char *ptr;
    int delimiter = line.find('|');
    
    if (delimiter == -1)
        throw std::runtime_error("Error: bad input => " + line.substr(0, delimiter - 1));
    
    this -> input.first = line.substr(0, delimiter - 1);
    this -> input.second = strtod(line.substr(delimiter + 2).c_str(), &ptr);
    processError(ptr);
}
void Btc::run(const char *input)
{
    std::ifstream file(input);

    if (file.is_open())
    {
        std::string line;

        getline (file, line);
        if (line != "date | value")
            throw std::runtime_error("Error : input in wrong format"); // depends got to check this out
        while (std::getline(file, line))
        {
            try
            {
                processLine(line);
            }
            catch (std::exception &e)
            {
                std::cout << e.what() << std::endl;
            }
        }
    }
    else
        throw std::runtime_error("Error: could not open file.");
}
Btc::Btc(std::string fileName)
{
    std::ifstream file (fileName);

    if (file.is_open())
    {
        std::string line;
        std::getline(file, line);
        while (std::getline(file, line))
        {
            int delimiter = line.find(',', 0);
   
            this -> data[line.substr(0, delimiter)] = line.substr(delimiter + 1);
        }
    }
    else
        throw std::runtime_error("data.csv file not found");
}