/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:17:40 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/22 17:43:36 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int ac, char **av)
{
    if (ac == 2)
    {
        try{
            RPN rpn;
            rpn.execute(av[1]);
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        return (0);
    }
    return (std::cout << "./RPN <argument>" << std::endl, 1);
}