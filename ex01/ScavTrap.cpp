#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name);
{
    this->_hitPoints = 1000;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScapTrap::~ScapTrap()
{

}

void    ScapTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
        this->_energyPoints -= 1;
    }
    else
        std::cout << "ScavTrap " << this->_name << " can't attack!" << std::endl;
}