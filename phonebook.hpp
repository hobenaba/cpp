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
};

#endif