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
    //std::cout << "default constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
    (void)src;
    
    //std::cout << "copy constructor called" << std::endl; 
}

Intern::~Intern()
{
    //std::cout << "destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &src)
{
    (void)src;
    
    return (*this);
}

Form *Intern::createPresidentialPardon(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::createRobotomyRequest(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form *Intern::createShrubberyCreation(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(std::string form, std::string target)
{
    std::string str[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form* (Intern::*caller[]) (std::string) = {&Intern::createRobotomyRequest, &Intern::createPresidentialPardon, &Intern::createShrubberyCreation};
    int i = -1;

    while (++i < 3)
    {
        if (form == str[i])
            return (std::cout << "intern creates " << form<< std::endl, (this->*caller[i])(target));
    }
    std::cout << "this form doesn't exit" << std::endl;
    return (NULL);
} 