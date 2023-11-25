/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:10:03 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/25 13:14:00 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("ash", 1);

        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        //bureaucrat.decrementGrade();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}