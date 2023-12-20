/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:12:43 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/20 21:06:31 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename T>

typename T::iterator easyfind(T &container, int toFind)
{
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);
    
    if (it == container.end())
        throw std::runtime_error("value not found");
    return (it);
}