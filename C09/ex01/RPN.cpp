/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:12:47 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/23 21:29:28 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &src)
{
    (void)src;
}

RPN &RPN::operator=(const RPN &src)
{
    (void)src; 

    return (*this);
}

RPN::~RPN(){}

//got to check this out

void RPN::multiplication()
{
    int tmp = this ->_numbers.top();
    this -> _numbers.pop();

    tmp = this -> _numbers.top() * tmp;
    this -> _numbers.pop();

    this -> _numbers.push(tmp);
}
void RPN::devision()
{
    int tmp = this ->_numbers.top();
    this -> _numbers.pop();
    
    if (tmp == 0)
        throw std::runtime_error("Error\nDevision on 0");
    tmp = this -> _numbers.top() / tmp;
    this -> _numbers.pop();

    this -> _numbers.push(tmp);
}

void RPN::difference()
{
    int tmp = this ->_numbers.top();
    this -> _numbers.pop();

    tmp = this -> _numbers.top() - tmp;
    this -> _numbers.pop();

    this -> _numbers.push(tmp);
}

void RPN::addition()
{
    int tmp = this ->_numbers.top();
    this -> _numbers.pop();

    tmp = this -> _numbers.top() + tmp;
    this -> _numbers.pop();

    this -> _numbers.push(tmp);
}

int RPN::execute(const char *expression)
{
    int i;
    std::string str = "+-/*";
    void (RPN::*helper[])(void) ={&RPN::addition, &RPN::difference, &RPN::devision, &RPN::multiplication};

    while (*expression)
    {
        i = 0;
        if (!isdigit(*expression) && !isspace(*expression))
        {
            int j = -1;
            while (str[++j])
            {
                if (str[j] == *expression)
                {
                    if (this -> _numbers.size() > 1)
                        (this->*helper[j])();
                    else
                        throw std::runtime_error("Error\ninvalid Operation");
                    break;
                }
                else if (j == 3)
                    throw std::runtime_error("Error\nUsage of undefined characters");
            }
        }
        else if (isdigit(*expression))
            this -> _numbers.push(*expression - '0');
        while (expression[i] && expression[i + 1] == ' ')
            i++;
        expression += i + 1;
    }
    if (this-> _numbers.size() != 1)
        throw std::runtime_error("Error\nInvalid operation");
    return (this -> _numbers.top());
}