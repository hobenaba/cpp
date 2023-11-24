/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:54:48 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/24 17:48:23 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private :
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        ~Bureaucrat();

        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &src);

        Bureaucrat &operator=(const Bureaucrat &src);
        std::string getName() const;
        int         getGrade() const;
        void        incrementGrade();
        void        decrementGrade();
       
       class GradeTooHighException : public std::exception
       {
            public:
                const char * what ();
       };
       
        class GradeTooLowException : public std::exception
       {
            public:
                const char * what ();
       };
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &src);

#endif