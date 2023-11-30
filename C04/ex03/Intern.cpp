/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:31:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/27 17:16:02 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "default constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
    (void)src;
    
    std::cout << "copy constructor called" << std::endl; 
}

Intern::~Intern()
{
    std::cout << "destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &src)
{
    (void)src;
    
    return (*this);
}

Form *Intern::makeForm(std::string form, std::string target)
{
    std::string str[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form *f[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
    int i = -1;
    
    while (++i < 3)
    {
        if (str[i] == form)
            return (std::cout << "intern creates " << form
                << std::endl, f[i]);
    }
    std::cout << "this form doesn't exit" << std::endl;
    return (NULL);
}