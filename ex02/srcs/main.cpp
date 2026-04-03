#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "=== CONSTRUCTION ===" << std::endl;
    FragTrap a("Xavier");
    ScavTrap b("Niel");

    std::cout << "\n=== COPY & ASSIGN ===" << std::endl;
    {
        FragTrap c(a);
        ScavTrap d("Boris");
        d = b;
        std::cout << "--- end of copy/assign scope ---" << std::endl;
    }

    std::cout << "\n=== COMBAT ===" << std::endl;
    a.attack(b.getName());
    b.takeDamage(a.getTakeDamage());
    b.beRepaired(10);
    b.attack(a.getName());
    a.takeDamage(b.getTakeDamage());

    std::cout << "\n=== SPECIAL ABILITIES ===" << std::endl;
    a.highFivesGuys();
    b.guardGate();

    std::cout << "\n=== ENERGY DEPLETION (ScavTrap) ===" << std::endl;
    while (b.getEnergyPoints() > 0)
        b.attack(a.getName());
    b.attack(a.getName());

    std::cout << "\n=== DEAD UNIT ===" << std::endl;
    a.takeDamage(200);
    a.attack(b.getName());
    a.beRepaired(5);
    a.highFivesGuys();

    std::cout << "\n=== DESTRUCTION ===" << std::endl;
    return 0;
}