#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "=== CONSTRUCTION ===" << std::endl;
    ClapTrap a("Xavier");
    ClapTrap b("Niel");

    std::cout << "\n=== COPY & ASSIGN ===" << std::endl;
    ClapTrap c(a);
    ClapTrap d("tmp");
    d = b;

    std::cout << "\n=== COMBAT ===" << std::endl;
    a.attack(b.getName());
    b.takeDamage(a.getTakeDamage());
    b.beRepaired(1);

    std::cout << "\n=== ENERGY DEPLETION ===" << std::endl;
    while (a.getEnergyPoints() > 0)
        a.attack(b.getName());
    a.attack(b.getName());

    std::cout << "\n=== DEAD UNIT ===" << std::endl;
    b.takeDamage(20);
    b.attack(a.getName());
    b.beRepaired(5);

    std::cout << "\n=== DESTRUCTION ===" << std::endl;
    return 0;
}