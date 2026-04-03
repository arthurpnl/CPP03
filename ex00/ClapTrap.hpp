#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hitPoints; // vie 
        unsigned int _energyPoints; // energie
        unsigned int _attackDamage; // degats d'attaque

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &cpy);
        ClapTrap &operator=(const ClapTrap &cpy);
        ~ClapTrap();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName() const;
        unsigned int getTakeDamage() const;
        unsigned int getEnergyPoints() const;
};

#endif