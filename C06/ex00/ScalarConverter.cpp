/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:13:47 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/09 18:17:03 by hobenaba         ###   ########.fr       */
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

void convertToChar(std::string literal)
{
    std::cout << "char: ";
    char *ptr;
    
    int num = strtod(literal.c_str(), &ptr);
    if (*ptr && literal.length() == 1)
        std::cout << literal << std::endl;
    else if (!(num >= 32 && num <= 126))
        std::cout << "non displayable" << std::endl;
    else
        std::cout << static_cast<char>(num) << std::endl;
    
}

void convertToInt(std::string literal)
{
    std::cout << "int: ";
    
    int num = strtod(literal, )
    //  i donty know how im gonna do this ????
    
}
void ScalarConverter::convert(std::string literal)
{
    convertToChar(literal);
}