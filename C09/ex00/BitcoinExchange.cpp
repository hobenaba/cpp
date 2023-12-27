/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:47:10 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/27 09:42:01 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Btc();
// Btc(const Btc &src);
// Btc &operator=(const Btc &src);

Btc::~Btc() {}

//check this out Canonical Form
 //check OUT DATE error strptime(31 for days are included always) and strftime
    //year % 4 to finish leap for february and tm structure
    //2012-1-22 is valid
void Btc::processError(char *ptr)
{
    if (*ptr)
        throw std::runtime_error("Error: not an int or a float value.");
    if (this -> input.second < 0)
        throw std::runtime_error("Error: not a positive number");
    else if (this -> input.second > 1000)
        throw std::runtime_error("Error: too large a number.");

    tm t;
    char *p = strptime (this ->input.first.c_str(), "%Y-%m-%d", &t);
    if (p == NULL || *p)
        throw std::runtime_error("Error : invalid format");
    if (t.tm_mon == 1 && !(t.tm_year % 4) && t.tm_mday > 29)
        throw std::runtime_error("Error : invalid date");
    else if (t.tm_mon == 1 && t.tm_year % 4 && t.tm_mday > 28)
        throw std::runtime_error("Error : invalid date");
    if ((strchr("358", t.tm_mon + '0') || t.tm_mon == 10) && t.tm_mday > 30)
        throw std::runtime_error("Error : invalid date");

    char *buffer = NULL;
    strftime(buffer, 10 * sizeof(char), "%Y-%m-%d", &t);
    std::cout << buffer << std::endl;
    if (this -> input.first != buffer)
        this -> input.first = buffer;
    exit (0);
}

void Btc::execLine()
{
    std::map<std::string, float>::iterator ite = this -> data.lower_bound(this -> input.first);
    
    if (ite -> first != this -> input.first)
        ite--;
    std::cout << this -> input.first << " => " << this -> input.second << " = " << this -> input.second * ite -> second << std::endl;
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
        if(line == "")
            throw std::runtime_error("Error : empty file");
        else if (line != "date | value")
            throw std::runtime_error("Error : input in wrong format."); // depends got to check this out
        while (std::getline(file, line))
        {
            try
            {
                processLine(line);
                execLine();
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
   
            this -> data[line.substr(0, delimiter)] = strtod(line.substr(delimiter + 1).c_str(), NULL);
        }
    }
    else
        throw std::runtime_error("Error : data.csv file not found.");
}