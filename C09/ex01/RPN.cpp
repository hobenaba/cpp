/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:39:15 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/22 17:53:01 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    //std::cout << "default constructor called " << std::endl;
}

RPN::RPN(const RPN &src)
{
    std::cout << "copy constructor called" << std::endl;
    *this = src;
}

RPN &RPN::operator=(const RPN &src)
{
    (void)src;
    //lets check out what i should do here.

    return (*this);
}

RPN::~RPN()
{
    //std::cout << "destructor called" << std::endl;
}

void RPN::addition()
{
    int b = this -> data.top();
    this -> data.pop();
    b = b + this -> data.top();
    this -> data.pop();
    this -> data.push(b);
}

void RPN::difference()
{
    int b = this -> data.top();
    this -> data.pop();
    b = this -> data.top() - b;
    this -> data.pop();
    this -> data.push(b);
}
void RPN::multiplication()
{
    int b = this -> data.top();
    this -> data.pop();
    b = b * this -> data.top();
    this -> data.pop();
    this -> data.push(b);
}
void RPN::division()
{
    int b = this -> data.top();
    this -> data.pop();
    b = this -> data.top() / b;
    this -> data.pop();
    this -> data.push(b);
}
void RPN::execute(char *expression)
{
    std::string str = "+-/*";
    int i = 0;
    void (RPN::*caller[]) (void) = {&RPN::addition, &RPN::difference, &RPN::division, &RPN::multiplication};
    while (*expression)
    {
        i = 0;
        int j = -1;
        while (str[++j])
        {
            if (str[j] == *expression)
            {
                if (this ->data.size() == 2)
                    (this->*caller[j])();
                else
                    throw std::runtime_error("Error\noperation invalid");
                //std::cout << "first operation : ";
                //std::cout << this -> data.top() << std::endl;
                break ;
            }
            else if (j == 3)
            {
                if (!(*expression >= '0' && *expression <= '9'))
                    throw std::runtime_error("Error\noperation invalid");
                //std::cout << *expression << std::endl;
                //std::cout << this -> data.top() << std::endl;
                this->data.push(*expression - '0');
            }
        } 
        while (expression[i] && expression[i + 1] == ' ')
            i++;
        expression += i + 1;
    }
    if (this -> data.size() != 1)
        throw std::runtime_error("Error\noperation invalid");
    std::cout << "RESULT" << std::endl;
    std::cout << this -> data.top() << std::endl;
}
//the number got to be an int