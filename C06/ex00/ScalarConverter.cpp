/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:13:47 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/12 14:16:22 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
    (void)src;
    std::cout << "copy constructor called" << std::endl;
}

ScalarConverter ScalarConverter::operator=(const ScalarConverter &src)
{
    (void)src;
    std::cout << "copy assignment called" << std::endl;
    
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "destructor called" << std::endl;
}

void convertToChar(std::string literal, int status)
{
    std::cout << "char: ";
    char *ptr;
    
    int num = strtod(literal.c_str(), &ptr);
    if (status == 1)
        std::cout << "impossible" << std::endl;
    else if (*ptr && literal.length() == 1)
        std::cout << literal << std::endl;
    else if (!(num >= 32 && num <= 126))
        std::cout << "non displayable" << std::endl;
    else
        std::cout << "\'" <<static_cast<char>(num) << "\'"<< std::endl;
    
}

void convertToInt(std::string literal, int status)
{
    std::cout << "int: ";
    char *ptr;
    
    int num = strtod(literal.c_str(), &ptr);
    if (status == 1)
        std::cout << "impossible" << std::endl;
    else if (*ptr && literal.length() == 1)
        std::cout << static_cast<int>(literal[0]) << std::endl;
    else
        std::cout << num << std::endl;
}

void convertToFloat(std::string literal)
{
    std::cout << "float: ";
    char *ptr;

    float num = strtod(literal.c_str(), &ptr);
    if (*ptr && literal.length() == 1)
        std::cout << static_cast<float>(literal[0]) << std::endl;
    else
    {
        if (static_cast<int>(num) == num)
            std::cout << num << ".0f" << std::endl;
        else
            std::cout << num << "f" << std::endl;
    }
}

void convertToDouble(std::string literal)
{
    std::cout << "double: ";
    char *ptr;

    double num = strtod(literal.c_str(), &ptr);
    if (*ptr && literal.length() == 1)
        std::cout << static_cast<double>(literal[0]) << std::endl;
    else
    {
        if(static_cast<int>(num) == num)
            std::cout << num << ".0" << std::endl;
        else
            std::cout << num << std::endl;
    }
}
void ScalarConverter::convert(std::string literal)
{
    int status = 0;

    if (literal == "-inff" || literal == "+inff" || literal == "nanf"
        || literal == "-inf" || literal == "+inf" || literal == "nan")
            status = 1;
    convertToChar(literal, status);
    convertToInt(literal, status);
    convertToFloat(literal);
    convertToDouble(literal);
}