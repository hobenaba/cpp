/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:56:41 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/27 16:58:36 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", 25, 5)
{
    //std::cout << "constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
    //std::cout << "constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src)
{
    //std::cout << "Copy constructor is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    Form::operator=(src);
    
    return (*this);
}

void PresidentialPardonForm::executionForm(Bureaucrat const &executor) const
{
    std::cout << executor.getName() << " have been pardoned by Zaphod Beeblebrox" << std::endl;
} 