/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:20:49 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/26 17:36:34 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ROBOTOMYREQUESTFORM_HPP
#define     ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class   RobotomyRequestForm : public  Form
{
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const  RobotomyRequestForm &src);
        ~RobotomyRequestForm();
    
        RobotomyRequestForm &operator=(const   RobotomyRequestForm &src);
    void executionForm(Bureaucrat const &executor) const;    
} ;

#endif