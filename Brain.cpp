/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:25:12 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 15:27:13 by hobenaba         ###   ########.fr       */
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
Brain::Brain(const Brain &src) : Bra
Brain Brain::operator=(const Brain &src);