/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:12:02 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/09 18:24:26 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>

class ScalarConverter {
    
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &src);
        ScalarConverter operator=(const ScalarConverter &src);
    public:
        ~ScalarConverter();
        static void convert(std::string literal);
};
void convertToChar(std::string literal);
void convertToInt(std::string literal);
void convertToFloat(std::string literal);
void convertToDouble(std::string literal);
