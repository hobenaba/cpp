/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:06:46 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/22 21:20:26 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "./RPN <expression>", 1);
    try{
        RPN rpn;
        int a = rpn.execute(av[1]);
        std::cout << "Result : " << a << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what()  << std::endl;
    }
    return (0);
}