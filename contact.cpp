#include "phonebook.hpp"

std::string *Contact::get_info(int b, std::string *info)
{
    if (b == 0)
        return (*info = "enter your first name : ", &this -> first_name);
    else if (b == 1)
        return (*info = "enter your last name : ",&this -> last_name);
    else if (b == 2)
        return (*info = "enter your nickname : ", &this -> nickname);
    else if (b == 3)
        return (*info = "enter your phone number : ", &this -> phone_number);
    else 
        return (*info = "enter your darkest secret : ", &this ->darkest_secret);
}

std::string Contact::get_data(int b, int index)
{
    std::string str;

    if (b == 0)
        str = std::to_string (index);
    else if (b == 1)
        str = this -> first_name;
    else if (b == 2)
        str = this -> last_name;
    else 
        str = this -> nickname;
    if (str.length() > 10)
        str = str.substr(0, 9) + std::string(1, '.');
    else
        str = std::string (10 - str.length(), ' ') + str;
    return (str = str + std::string(1, '|'));
}

void    Contact::get_fields()
{
    std::cout << "First Name : " << this -> first_name << std::endl;
    std::cout << "Last Name : " << this -> last_name << std::endl;
    std::cout << "Nickname : " << this ->nickname << std::endl;
    std::cout << "Phone Number : " << this -> phone_number << std::endl;
    std::cout << "Darkest Secret : " << this -> darkest_secret << std::endl;
}