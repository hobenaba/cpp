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
        void set_contact();
        void get_contact();
        void enter_index();
};

#endif