/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:56:11 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/26 10:35:17 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name(""), _gradeSign(150), _gradeExec(150)
{
    //std::cout << "default constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false)
{
    //std::cout << "constructor called" << std::endl;
}

AForm::AForm(const AForm &src) : _name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec), _signed(src._signed)
{
    //std::cout << "copy constructor called" << std::endl;
}

AForm::~AForm()
{
    //std::cout << "destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &src)
{
    this -> _signed = src._signed;

    return (*this);
}

void AForm::beSigned(const Bureaucrat &src)
{
    if (src.getGrade() <= this -> _gradeSign)
        this -> _signed = true;
    else
        throw GradeTooLowException();
}

std::string AForm::getName() const
{
    return (this -> _name);
}

int AForm::getGradeSign() const
{
    return (this -> _gradeSign);
}

int AForm::getGradeExec() const
{
    return (this -> _gradeExec);
}

bool AForm::getSign() const
{
    return (this -> _signed);
}
        
const char * AForm::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}

std::ostream &operator<<(std::ostream &o, const AForm &src)
{
    o << "------The Aforms inAformations ------\n" << "name : " 
        << src.getName() + '\n' << "sign grade : " << src.getGradeSign() << '\n'
            <<  "sign exec : " << src.getGradeExec();

    return (o);
}

