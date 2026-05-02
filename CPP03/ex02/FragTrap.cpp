#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->HitPoints = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
    std::cout << "Default constructor called for FragTrap" << std::endl;
}
FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    this->HitPoints = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
    std::cout << "parametrized constructor called for FragTrap" << std::endl;
}
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "Copy constructor called for FragTrap" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "copy assignment operator called for FragTrap" << std::endl;
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "Destructor called for FragTrap" << std::endl;
}
void FragTrap::attack(const std::string &target)
{
    if (!this->EnergyPoint || !this->HitPoints)
        return;
    this->EnergyPoint--;
    std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << this->Name << " requests a positive high five!" << std::endl;
}

