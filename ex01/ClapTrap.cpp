#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name)
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    this->_name = name;
    std::cout << "ClapTrap " << this->_name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    *this = cpy;
    std::cout << "ClapTrap copy constructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
    this->_name = cpy._name;
    this->_hitPoints = cpy._hitPoints;
    this->_energyPoints = cpy._energyPoints;
    this->_attackDamage = cpy._attackDamage;
    std::cout << "ClapTrap assignment operator called!" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " destroyed!" << std::endl;
}

std::string ClapTrap::getName() const
{
    return (this->_name);
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return (this->_energyPoints);
}

unsigned int ClapTrap::getTakeDamage() const
{
    return (this->_attackDamage);
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
        this->_energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << this->_name << " is already dead!" << std::endl;
        return ;
    }
    if (this->_hitPoints < amount)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if (this->_hitPoints == 0)
        std::cout << this->_name << " is dead!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout << this->_name << " can't repair, not enough energy or health!" << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    this->_energyPoints -= 1;
    std::cout << this->_name << " repairs itself, recovering " << amount << " hit points !" << std::endl;
}
