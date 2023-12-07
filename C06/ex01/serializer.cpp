/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:55:25 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/07 15:58:24 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &src)
{
    (void)src;
    std::cout << "copy constructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &src)
{
    (void)src;
    std::cout << "copy assignment called" << std::endl;
}

static uintptr_t Serializer::serialize(Data *ptr);
static Data *Serializer::deserialize(uintptr_t raw);

Serializer::~Serializer()
{
    std::cout << "destructor called" << std::endl;
}