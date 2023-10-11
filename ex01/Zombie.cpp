#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}
void Zombie::set_name(std::string name)
{
    this -> name = name;
}

Zombie::~Zombie()
{
    std::cout << "zombie " << this -> name << " have been destroyed" << std::endl;

}

void Zombie::announce()
{
    std::cout << this -> name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}