#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "=== CONSTRUCTION ===" << std::endl;
    ScavTrap a("Xavier");
    ScavTrap b("Niel");

    std::cout << "\n=== COPY & ASSIGN ===" << std::endl;
    ScavTrap c(a);
    ScavTrap d("tmp");
    d = b;

    std::cout << "\n=== COMBAT ===" << std::endl;
    a.attack(b.getName());
    b.takeDamage(a.getTakeDamage());
    b.beRepaired(10);
    a.guardGate();

    std::cout << "\n=== ENERGY DEPLETION ===" << std::endl;
    while (a.getEnergyPoints() > 0)
        a.attack(b.getName());
    a.attack(b.getName());

    std::cout << "\n=== DEAD UNIT ===" << std::endl;
    b.takeDamage(200);
    b.attack(a.getName());
    b.beRepaired(5);

    std::cout << "\n=== DESTRUCTION ===" << std::endl;
    return 0;
}