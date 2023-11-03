//add header

#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "<FragTrap> default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout <<  "<FragTrap> " << name << " is constructed" << std::endl;    
}


FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{

    std::cout << "<FragTrap> copy constructor is called" << std::endl;
}

FragTrap FragTrap::operator=(const FragTrap &src)
{
    ClapTrap::operator=(src);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "<FragTrap> destructor is called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "<FragTrap> " << _name << " displays a positive high fives request" << std::endl;
}