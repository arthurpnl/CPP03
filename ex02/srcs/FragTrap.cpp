#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
    std::cout << "FragTrap copy constructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy)
{
    ClapTrap::operator=(cpy);
    std::cout << "FragTrap assignment operator called!" << std::endl;
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " destroyed!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
        this->_energyPoints -= 1;
    }
    else
        std::cout << "FragTrap " << this->_name << " can't attack!" << std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap " << this->_name << " requests a high five!" << std::endl;
}