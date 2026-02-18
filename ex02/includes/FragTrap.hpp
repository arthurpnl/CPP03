#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &cpy);
        FragTrap &operator=(const FragTrap &cpy);
        ~FragTrap();
        void highFiveGuys(void);
};

#endif