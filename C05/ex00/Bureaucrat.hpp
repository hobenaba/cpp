/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:10:24 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/24 18:35:04 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class Bureaucrat {
    private :
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat &src);
        std::string getName();
        int getGrade();
        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char * what();
        };

        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char * what();
        };
};
    std::ostream &operator<<(std::ostream &o, const Bureaucrat &src);

#endif