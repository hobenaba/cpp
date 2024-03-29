/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:47:10 by hobenaba          #+#    #+#             */
/*   Updated: 2024/01/04 14:48:01 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc(){}
Btc::Btc(const Btc &src)
{
    *this = src;
}

Btc &Btc::operator=(const Btc &src)
{
    this -> data = src.data;
    this -> input = src.input;

    return (*this);
}

Btc::~Btc()
{
   this -> data.clear();
}

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
        throw std::runtime_error("Error : invalid date");
    if (t.tm_mon == 1 && !(t.tm_year % 4) && t.tm_mday > 29)
        throw std::runtime_error("Error : invalid date");
    else if (t.tm_mon == 1 && t.tm_year % 4 && t.tm_mday > 28)
        throw std::runtime_error("Error : invalid date");
    if ((strchr("358", t.tm_mon + '0') || t.tm_mon == 10) && t.tm_mday > 30)
        throw std::runtime_error("Error : invalid date");
    if (t.tm_year + 1900 < 2009 || t.tm_mday < 2)
        throw std::runtime_error("Error : date out of scope");
    char buffer[11];
    
    strftime(buffer, 10 * sizeof(char), "%Y-%m-%d", &t);
    if (this -> input.first != buffer)
        this -> input.first = buffer;  
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
    if ((!(line[delimiter + 2] >= '0' && line[delimiter + 2] <= '9')
        && (line[delimiter + 2] != '+' && line[delimiter + 2] != '-'))
        || line[delimiter - 1] != ' ')
        throw std::runtime_error("Error: invalid format");
    std::string str = line.substr(delimiter + 1);
    if (str[str.length() - 1] == '.')
        throw std::runtime_error("Error : invalid format");
    this -> input.first = line.substr(0, delimiter - 1);
    this -> input.second = strtod(str.c_str(), &ptr);
    
    processError(ptr);
}
void Btc::run(const char *input)
{
    std::ifstream file(input);
    std::string line;

    if (file.is_open())
    {
        getline (file, line);
        if (line != "date | value")
            throw std::runtime_error("Error : input in wrong format.");
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
    file.close();
}
