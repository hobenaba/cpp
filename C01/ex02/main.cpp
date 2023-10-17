/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:00:56 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/11 16:00:58 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string string= "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << &string << " : " << string << std::endl;
    std::cout << stringPTR << " : " << *stringPTR << std::endl;
    std::cout << &stringREF << " : "<< stringREF << std::endl;
}