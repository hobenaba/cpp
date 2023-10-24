/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:56:36 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/24 17:31:55 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int PhoneBook::checkNumber(std::string str)
{
    int i = -1;
    
    while (str[++i])
    {
        if (i == 0 && str[i] == '+')
            i++;
        else if (std::isdigit(str[i]) == 0)
            return (1);
    }
    return (0);
}
PhoneBook::PhoneBook()
{
    this -> index = -1;
}

void PhoneBook::set_contact()
{
   int b;
   std::string *to;
   std::string info;

   b = 0;
   this -> index++;
   while (b < 5)
   {
        to = contact[this -> index % 8].get_info(b, &info);
        std::cout << info << std::endl ;
        std::getline(std::cin, *to);
        if (std::cin.eof())
            exit (0);
        if (to->empty())
            std::cout << "invalid input, try again" << std::endl;
        else if (b == 3 && checkNumber(*to))
            std::cout << "invalid Phone Number, try again" << std::endl;
        else
            b++;
   }
}

std::string PhoneBook::enter_index(int i)
{
    std::string num;

    std::cout << "enter your contact index : " << std::endl;
    std::getline(std::cin, num);
    if (std::cin.eof())
        exit (0);
    else if (num.empty() || num.length() > 1 || std::isdigit(num[0]) == 0)
        return (std::cout << "input invalid, try again" << std::endl, "error");
    if (std::stoi(num) < 0 || std::stoi(num) > 7 || std::cin.fail())
        return (std::cout << "input invalid, try again" << std::endl, "error");
    else if (std::stoi(num) <= i)
        contact[std::stoi(num)].get_fields();
    else
        std::cout << "no fields to show for this index" << std::endl;
    return ("finish");
}
void PhoneBook::get_contact()
{
    int i;
    std::string out;
    std::string in;
    int         b;
    
    i = -1;
    b = 0;
    std::cout << "------------- PhoneBook Contact -------------" << std::endl;
    while (++i < 8 && i <= this -> index)
    {  
       std::cout << "|" << contact[i].get_data(0, i) << contact[i].get_data(1, i)
        << contact[i].get_data(2, i) << contact[i].get_data(3, i) << std::endl;
    }
    while (enter_index(i - 1) == "error");
}