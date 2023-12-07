/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:38:52 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/05 17:48:12 by hobenaba         ###   ########.fr       */
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

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
    (void)src;
    
    std::cout << "copy assignment called" << std::endl;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "destructor called" << std::endl;
}

void ScalarConverter::convert(std::string literal)
{
    void (*FuncPtr[]) (std::string) = {&toChar, &toInt, &toFloat, &toDouble};
    
    int i = -1;
    while (++i < 4)
    {
        try{
            (*FuncPtr[i])(literal);   
        }
        catch(std::exception &e)
        {
            std::cout << "impossible" << std::endl;
        }
    }
}

void toChar(std::string literal)
{
    std::cout << "char : ";
    
    int a = std::stoi(literal);
    
    if (!(a >= 32 && a <= 126))
        std::cout << "not displayable" << std::endl;
    else
        std::cout <<  static_cast<char>(a) << std::endl;
}

void toInt(std::string literal)
{
    std::cout << "int : ";
    
    std::cout << std::stoi(literal) << std::endl;;
}

void toFloat(std::string literal)
{
    std::cout << "float : ";
    //std::cout << literal << std::endl;
    std::cout << std::stof(literal) << std::endl;
}

void toDouble(std::string literal)
{
    std::cout << "double : ";

    std::cout << std::stod(literal) << std::endl;
}
//std::stoi to int // stof -> float // stod -> to double