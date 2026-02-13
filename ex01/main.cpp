#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    ScavTrap a("Xavier");
    ScavTrap b("Niel");

    a.attack(b.getName());
    b.takeDamage(a.getTakeDamage());
    b.beRepaired(10);
    a.guardGate();
    b.takeDamage(200);
    b.attack(a.getName());
    b.beRepaired(5);

    return 0;
}