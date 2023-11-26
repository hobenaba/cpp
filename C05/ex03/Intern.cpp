/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:31:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/26 19:01:27 by hobenaba         ###   ########.fr       */
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
    int i = -1;
    Form *f;
    
    while (++i < 3)
    {
        if (str[i] == form)
        {
            switch(i)
            {
                case 0:
                    f = new RobotomyRequestForm(target);
                    break;
                case 1:
                    f = new PresidentialPardonForm(target);
                    break;
                case 2:
                    f = new ShrubberyCreationForm(target);
                    break;
            }
            return (std::cout << "intern creates " << form
                << std::endl, f);
        }
    }
    std::cout << "this form doesn't exit" << std::endl;
    return (NULL);
}