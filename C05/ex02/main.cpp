/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:10:03 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/26 11:24:02 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{

    try {
        Bureaucrat bureaucrat("ash", 10); // error with 200
        //ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        // PresidentialPardonForm form3("President");
        //std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
        //bureaucrat.signForm(form1);
        //bureaucrat.executeForm(form1);
        std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
        bureaucrat.signForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        // std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
        // bureaucrat.signForm(form3);
        // bureaucrat.executeForm(form3);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}