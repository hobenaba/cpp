/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:05:43 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/14 21:49:40 by mac              ###   ########.fr       */
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
Brain &Brain::operator=(const Brain &src)
{
    int i = -1;
    
    while (++i < 100)
        this -> ideas[i] = src.ideas[i];
    return *this;
}
Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

void Brain::setIdea(int idx, int type, std::string str)
{
    if (type == 0 && idx < 100)
        this -> ideas[idx] = str;
    else
    {
        while (idx < 100)
            this -> ideas[idx++] = str;
    }
}

void Brain::getIdea(int idx, int type)
{
     if (type == 0 && idx < 100)
        std::cout << this -> ideas[idx] << std::endl;
    else
    {
        while (idx < 100)
            std::cout << this -> ideas[idx++] << std::endl;
    }
}