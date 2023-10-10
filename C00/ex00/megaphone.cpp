#include <iostream>
#include <cctype>

int main (int ac , char **av)
{
    int i;

    i = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (av[++i])
        {
            int j = -1;
            while (av[i][++j])
                std::cout << (char)toupper(av[i][j]);
        }
        std::cout << "\n";
    }
}