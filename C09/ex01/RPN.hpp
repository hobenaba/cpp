/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:09:18 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/22 21:21:09 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> numbers;
        
        void multiplication();
        void devision();
        void difference();
        void addition();
    public:
        RPN();
        RPN(const RPN &src);
        RPN &operator=(const RPN &src);

        ~RPN();
        int execute(const char *expression);
};