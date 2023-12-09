/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:13:47 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/09 10:30:45 by hobenaba         ###   ########.fr       */
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

void ScalarConverter::convert(std::string literal);  