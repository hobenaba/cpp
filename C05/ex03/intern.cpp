/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:31:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/26 18:33:48 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "default constructor called";
}

Intern::Intern(const Intern &src)
{
    std::cout << "copy constructor called" << std::endl; 
}

Intern::Intern~Intern()
{
    std::cout << "destructor called" << std::endl;
}

Intern &Intern::Internoperator=(const Intern &src)
{
    return (*this);
}

Form *Intern::InternmakeForm(std::string form, std::string target)
{
    
}