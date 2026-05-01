#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

void HumanB::setWeapon(Weapon &wp){
    this->wp = &wp;
}

void HumanB::attack(void){
    std::cout << this->name
              << " attacks with their "
              << this->wp->getType() << std::endl;
}