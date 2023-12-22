/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:12:47 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/22 21:36:38 by hobenaba         ###   ########.fr       */
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
    int tmp = this ->numbers.top();
    this -> numbers.pop();

    tmp = this -> numbers.top() * tmp;
    this -> numbers.pop();

    this -> numbers.push(tmp);
}
void RPN::devision()
{
    int tmp = this ->numbers.top();
    this -> numbers.pop();

    tmp = this -> numbers.top() / tmp;
    this -> numbers.pop();

    this -> numbers.push(tmp);
}

void RPN::difference()
{
    int tmp = this ->numbers.top();
    this -> numbers.pop();

    tmp = tmp - this -> numbers.top();
    this -> numbers.pop();

    this -> numbers.push(tmp);
}

void RPN::addition()
{
    int tmp = this ->numbers.top();
    this -> numbers.pop();

    tmp = tmp + this -> numbers.top();
    this -> numbers.pop();

    this -> numbers.push(tmp);
}

int RPN::execute(const char *expression)
{
    int i;
    std::string str = "+-/*";
    void (RPN::*helper[])(void) ={&RPN::addition, &RPN::difference, &RPN::devision, &RPN::multiplication};

    while (*expression)
    {
        i = 0;
        if (!(*expression >= '0' && *expression <= '9'))
        {
            int j = -1;
            while (str[++j])
            {
                if (str[j] == *expression)
                {
                    (this->*helper[j])();
                    std::cout << this -> numbers.top() << std::endl;
                    break;
                }
                else if (j == 3)
                    throw std::runtime_error("Error\nUsage of undefined characters");
            }
        }
        else
            this -> numbers.push(*expression - '0');
        while (expression[i] && expression[i + 1] == ' ')
            i++;
        expression += i + 1;
    }
    return (this -> numbers.top());
}
//check out empty string.