/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:55:25 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/07 16:43:03 by hobenaba         ###   ########.fr       */
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

    return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast <uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

Serializer::~Serializer()
{
    std::cout << "destructor called" << std::endl;
}