/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:53:18 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/24 16:01:53 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main ()
{
    std::string cmd;
    PhoneBook phonebook;

    cmd = "";
    while (cmd != "EXIT")
    {
        std::cout << "cmd : " << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            exit (0);
        if (cmd.empty())
            std::cout << "invalid input, try again" << std::endl;
        else if (cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT")
            std::cout << "invalid command, try again" << std::endl;
        else
        {
            if (cmd == "ADD")
                phonebook.set_contact();
            else if (cmd == "SEARCH")
                phonebook.get_contact();
        }
    }
}