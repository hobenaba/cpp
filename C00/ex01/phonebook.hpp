/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:56:48 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/24 16:29:22 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        int index;
    public :
        PhoneBook();
        void    set_contact();
        void    get_contact();
        std::string  enter_index(int i);
        int checkNumber(std::string str);
};

#endif