#include "FragTrap.hpp"

int main(void)
{
    std::cout << "=== Creating FragTrap ===" << std::endl;
    FragTrap frag("Fraggy");

    std::cout << "\n=== Testing actions ===" << std::endl;
    frag.attack("Target dummy");
    frag.takeDamage(42);
    frag.beRepaired(10);
    frag.highFivesGuys();

    std::cout << "\n=== End of scope ===" << std::endl;
    return 0;
}
