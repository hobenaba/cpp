/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:15:07 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/24 18:35:24 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) 
{
    std::cout << "constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    std::cout << "copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    this -> _grade = src._grade;
    
    return (*this);
}

std::string Bureaucrat::getName()
{
    return (this -> _name);
}

int Bureaucrat::getGrade()
{
    return (this -> _grade);
}

void Bureaucrat::incrementGrade()
{
    if (this -> _grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this -> _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this -> _grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this -> _grade++;    
}
std::ostream &operator<<(std::ostream &o, const Bureaucrat &src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return (o);
}

const char *Bureaucrat::GradeTooHighException::what ()
{
    return ("grade too high");
}

const char *Bureaucrat::GradeTooLowException::what ()
{
    return ("grade too low");
}