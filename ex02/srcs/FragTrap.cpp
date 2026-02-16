#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " created!" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " destroyed!" << std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap " << this->_name << " requests a high five!" << std::endl;
}