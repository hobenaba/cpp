/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:12:43 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/19 19:37:44 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename T>

typename T::iterator easyfind(T container, int toFind)
{
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);
    
    try{
        if (it == container.end())
            throw "value not Found";
        std::cout << "value Found" << std::endl;
    }
    catch (const char *str)
    {
        std::cout << str << std::endl;
    }
    return (it);
}