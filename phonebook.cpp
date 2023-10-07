#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    this -> index = 0;
}

void PhoneBook::set_contact()
{
    contact[this -> index].set_first_name();
    contact[this -> index].set_last_name();
    contact[this -> index].set_nickname();
    contact[this -> index].set_phone_number();
    contact[this -> index].set_darkest_secret();
}