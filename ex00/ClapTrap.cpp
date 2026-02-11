#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name)
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    this->_name = name;
}

ClapTrap::~ClapTrap()
{

}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
        this->_energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap <name> can't attack!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
        return ;
    }
    if (this->_hitPoints < amount)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if (this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{

}