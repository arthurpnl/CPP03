#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Xavier");
    ClapTrap b("Niel");

    a.attack(b.getName());
    b.takeDamage(a.getTakeDamage());
    b.beRepaired(1);
    while (a.getEnergyPoints() > 0)
        a.attack(b.getName());
    a.attack(b.getName());
    b.takeDamage(20);
    b.attack(a.getName());
    b.beRepaired(5);

    return 0;
}