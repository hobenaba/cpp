/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:00:56 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/25 11:39:32 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string string= "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "address of string : "<< &string << std::endl;
    std::cout << "address of stringPTR : " << stringPTR << std::endl;
    std::cout << "address of stringREF : " << &stringREF << std::endl;
    
    std::cout << "value of string : "<< string << std::endl;
    std::cout << "value of stringPTR : " << *stringPTR << std::endl;
    std::cout << "value of stringREF : " << stringREF << std::endl;
    
}