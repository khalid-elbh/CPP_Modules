#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn) : name(name), wpn(wpn) {}

void HumanA::attack(void){
    std::cout << this->name
              << " attacks with their "
              << this->wpn.getType() << std::endl;
}