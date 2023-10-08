#include "phonebook.hpp"

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
        std::cout << info;
        std::getline(std::cin, *to);
        if (to->empty())
            std::cout << "invalid input, try again" << std::endl;
        else
            b++;
   }
}

void PhoneBook::enter_index()
{
    std::string in;

    std::cout << "enter your contact index :";
    getline(std::cin, in);
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
    enter_index();
}