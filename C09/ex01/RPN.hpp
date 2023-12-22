/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:23:28 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/22 17:39:22 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <stack>

class RPN 
{
    private:
        std::stack<int> data;
        void addition();
        void difference();
        void multiplication();
        void division();
        
    public:
        RPN();
        RPN(const RPN &src);

        RPN &operator=(const RPN &src);
        ~RPN();

        void execute(char *expression);
};