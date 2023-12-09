/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:12:02 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/09 10:13:42 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter {
    
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &src);
        ScalarConverter operator=(const ScalarConverter &src);
    public:
        ~ScalarConverter();
        static void convert(std::string literal);  
};