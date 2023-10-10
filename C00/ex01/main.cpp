#include "phonebook.hpp"

int main ()
{
    std::string cmd;
    PhoneBook phonebook;

    while (cmd != "EXIT")
    {
        std::cout << "cmd : ";
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            exit (0);
        if (cmd.empty())
            std::cout << "invalid input, try again" << std::endl;
        else
        {
            if (cmd == "ADD")
                phonebook.set_contact();
            else if (cmd == "SEARCH")
                phonebook.get_contact();
        }
    }
}