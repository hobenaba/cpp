/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:23:02 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/26 12:08:00 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", 72, 45)
{
    std::cout << "constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
    std::cout << "constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src)
{
    std::cout << "Copy constructor is called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    Form::operator=(src);
    
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    int *nu = new int;
    std::cout << *nu << std::endl;

    if (*nu % 2 == 0)
       std::cout << executor.getName() << " has been robotomized successfully" << std::endl; 
    else
        std::cout << "the robotomy failed for " << executor.getName() << std::endl;
    //delete nu;
} 