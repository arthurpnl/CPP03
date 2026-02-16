#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    // Test construction chaining
    std::cout << "=== CREATION ===" << std::endl;
    FragTrap a("Xavier");
    FragTrap b("Niel");
    ScavTrap c("Robot");

    // Test attaque FragTrap
    std::cout << "\n=== COMBAT ===" << std::endl;
    a.attack(b.getName());
    b.takeDamage(a.getTakeDamage());
    b.beRepaired(10);

    // Test high five
    std::cout << "\n=== HIGH FIVE ===" << std::endl;
    a.highFiveGuys();
    b.highFiveGuys();

    // Comparer ScavTrap et FragTrap
    std::cout << "\n=== SCAVTRAP VS FRAGTRAP ===" << std::endl;
    c.attack(a.getName());
    a.takeDamage(c.getTakeDamage());
    c.guardGate();

    // Tuer Niel et tester actions sur un mort
    std::cout << "\n=== KILL TEST ===" << std::endl;
    b.takeDamage(200);
    b.attack(a.getName());
    b.beRepaired(5);
    b.highFiveGuys();

    // Epuiser l'énergie de Xavier
    std::cout << "\n=== ENERGY TEST ===" << std::endl;
    for (int i = 0; i < 101; i++)
        a.attack(b.getName());

    // Test destruction chaining (ordre inverse)
    std::cout << "\n=== DESTRUCTION ===" << std::endl;
    return 0;
}