/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:05:43 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/10 17:18:39 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
}
Brain::Brain(const Brain &src)
{
   int i = -1;
    
   std::cout << "Brain created" << std::endl;
   while (++i < 100)
    this -> ideas[i] = src.ideas[i];
}
Brain Brain::operator=(const Brain &src)
{
    return Brain(src);
}
Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}