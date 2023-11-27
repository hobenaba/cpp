/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:56:11 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/27 14:50:36 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _gradeSign(150), _gradeExec(150), _signed(false)
{
    //std::cout << "default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false)
{
    if (_gradeSign < 1 || _gradeExec < 1)
        throw Form::GradeTooHighException();
    else if (_gradeSign > 150 || _gradeExec > 150)
        throw Form::GradeTooLowException();
    //std::cout << "constructor called" << std::endl;
}

Form::Form(const Form &src) : _name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec), _signed(src._signed)
{
    //std::cout << "copy constructor called" << std::endl;
}

Form::~Form()
{
    //std::cout << "destructor called" << std::endl;
}

Form &Form::operator=(const Form &src)
{
    this -> _signed = src._signed;

    return (*this);
}

void Form::beSigned(const Bureaucrat &src)
{
    if (src.getGrade() <= this -> _gradeSign)
        this -> _signed = true;
    else
        throw GradeTooLowException();
}

std::string Form::getName() const
{
    return (this -> _name);
}

int Form::getGradeSign() const
{
    return (this -> _gradeSign);
}

int Form::getGradeExec() const
{
    return (this -> _gradeExec);
}

bool Form::getSign() const
{
    return (this -> _signed);
}
        
const char * Form::GradeTooHighException::what() const throw()
{
    return ("form grade too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("form grade too low");
}

std::ostream &operator<<(std::ostream &o, const Form &src)
{
    o << "------The forms informations ------\n" << "name : " 
        << src.getName() + '\n' << "sign grade : " << src.getGradeSign() << '\n'
            <<  "sign exec : " << src.getGradeExec();

    return (o);
}

