/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:12:47 by hobenaba          #+#    #+#             */
/*   Updated: 2024/01/03 17:57:09 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &src)
{
    *this = src;
}

RPN &RPN::operator=(const RPN &src)
{
    this -> _numbers = src._numbers;
    
    return (*this);
}

RPN::~RPN()
{
    while(!this ->_numbers.empty())
        this -> _numbers.pop();
}

//got to check this out canonical form 

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
        throw std::runtime_error("Error : Devision on 0");
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

void RPN::checkChar(char c)
{
    void (RPN::*helper[])(void) ={&RPN::addition, &RPN::difference, &RPN::devision, &RPN::multiplication};
    std::string str = "+-/*";
    int j = -1;
    
    while (str[++j])
    {
        if (str[j] == c)
        {
            if (this -> _numbers.size() > 1)
                (this->*helper[j])();
            else
                throw std::runtime_error("Error : invalid Operation");
            break;
        }
        else if (j == 3)
            throw std::runtime_error("Error : Usage of undefined characters");
    }
}
int RPN::execute(const char *expression)
{
    int i;

    while (*expression)
    {
        i = 0;
        if (!isdigit(*expression) && !isspace(*expression))
            checkChar(*expression);
        else if (isdigit(*expression))
            this -> _numbers.push(*expression - '0');
        while (expression[i] && expression[i + 1] == ' ')
            i++;
        expression += i + 1;
    }
    if (this-> _numbers.size() != 1)
        throw std::runtime_error("Error : Invalid operation");
    return (this -> _numbers.top());
}