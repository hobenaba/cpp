/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:41:13 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/13 17:39:43 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *test = new Data;
    test  -> name = "eva";

    std::cout << "original : " << test -> name << std::endl;
    
    uintptr_t ptr = Serializer::serialize(test);
    std::cout << "address ptr NOT original " << ptr << std::endl;
    
    Data *out = Serializer::deserialize(ptr);
    std::cout << "Data NOT original : " << out -> name << std::endl;
    delete test;
}