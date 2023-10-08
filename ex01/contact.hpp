#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        std::string *get_info(int b, std::string *info);
        std::string get_data(int b, int index);
        void        get_fields();
    } ;

#endif