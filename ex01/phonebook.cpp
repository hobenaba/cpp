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

std::string PhoneBook::enter_index(int i)
{
    int num;

    std::cout << "enter your contact index : ";
    std::cin >> num;
    if (num < 0 || num > 7 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return (std::cout << "input invalid, try again" << std::endl, "error");
    }
    else if (num <= i)
        contact[num].get_fields();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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