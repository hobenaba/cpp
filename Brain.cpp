/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:25:12 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 15:31:38 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain is destroyed" << std::endl;
}
Brain::Brain(const Brain &src)
{
    std::cout << "Brain created" << std::endl;
   
}
Brain Brain::operator=(const Brain &src)
{
    
}