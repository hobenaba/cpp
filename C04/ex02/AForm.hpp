/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:10:47 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/26 11:12:18 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>
#include <time.h>

class Bureaucrat;
class Form {
    private:
        const std::string _name;
        const int _gradeSign;
        const int _gradeExec;
        bool  _signed;
    public:
        Form();
        Form(std::string name, int gradeSign, int gradeExec);
        Form(const Form &src);
        ~Form();

        Form &operator=(const Form &src);
        void beSigned(const Bureaucrat &src);
        void execute (Bureaucrat const &executor) const;
        virtual void        executionForm(Bureaucrat const &executor) const = 0;

        std::string getName() const;
        int getGradeSign() const;
        int getGradeExec() const;
        bool getSign() const;
        
        class GradeTooHighException : public std::exception
        {
            public :
                const char * what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public :
                const char * what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, const Form &src);

#endif