#include "Zombie.hpp"

int main ()
{
    std::string name;
    std::cout << "creating a zombie on the stack" << std::endl;
    std::cout << "zombie name : ";
    std::cin >> name;
    Zombie szombie(name);
    std::cout << "creating a zombie on the heap" << std::endl;
    std::cout << "zombie name : ";
    std::cin >> name;
    Zombie *hzombie = newZombie(name);
    hzombie -> announce();
    delete hzombie;
    std::cout << "calling randomChump()" << std::endl;
    randomChump("random");
}