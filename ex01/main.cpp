#include "Zombie.hpp"

int main ()
{
    int         n;
    std::string name;
    int i = -1;

    std::cout << "enter the number of zombies : ";
    std::cin >> n;
    std::cout << "enter zombies name : ";
    std::cin >> name;
    Zombie *zombies = zombieHorde(n, name);
    while (++i < n)
        zombies[i].announce();
    delete [] zombies;
}