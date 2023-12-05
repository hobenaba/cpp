/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:38:52 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/05 16:03:30 by hobenaba         ###   ########.fr       */
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
    toChar(literal);
}

void toChar(std::string literal)
{
    std::cout << "char : ";
    
    std::cout << static_cast<int>(literal) << std::endl;
}

//std::stoi to int // stof -> float // stod -> to double