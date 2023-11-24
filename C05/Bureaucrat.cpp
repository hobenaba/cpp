/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:01:44 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/24 17:27:58 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    //std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (this -> _grade < 1)
        Bureaucrat::GradeTooLowException;
    else if (this -> _grade > 150)
        Bureaucrat::GradeTooHighException;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    // here do i have to assign src._name to this -> _name or not
    this -> _grade = src._grade;

    return (*this);
}

std::string Bureaucrat::getName() const 
{
    return (this -> _name);
}

int         Bureaucrat::getGrade() const
{
    return (this -> _grade);
}

void        Bureaucrat::incrementGrade()
{
    this -> _grade--;
}

void        Bureaucrat::decrementGrade()
{
    this -> _grade++;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << '\n';
    return (o);
}

const char *Bureaucrat::GradeTooHighException::what()
{
    std::cerr << "Grade too high" << '\n';
}

const char *Bureaucrat::GradeTooHighException::what()
{
    std::cerr << "Grade too high" << '\n';
}