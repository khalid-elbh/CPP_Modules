#include "DiamondTrap.hpp"

int main() {
    std::cout << "--- Constructing DiamondTrap ---" << std::endl;
    // This will trigger the constructor chain: 
    // ClapTrap -> ScavTrap -> FragTrap -> DiamondTrap
    DiamondTrap dt("Sparky");

    std::cout << "\n--- Testing Identity ---" << std::endl;
    dt.whoAmI();

    std::cout << "\n--- Testing Overridden Attack ---" << std::endl;
 
    dt.attack("an intruder");

    std::cout << "\n--- Testing Inherited Functions ---" << std::endl;
    dt.beRepaired(10);
    dt.guardGate();
    dt.highFivesGuys();

    std::cout << "\n--- Testing Copy and Assignment ---" << std::endl;
    DiamondTrap dtCopy(dt);
    dt = dtCopy;
    dtCopy.whoAmI();

    std::cout << "\n--- Destructors ---" << std::endl;
    return 0;
}