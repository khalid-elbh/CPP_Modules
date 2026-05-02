#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->HitPoints = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
    std::cout << "Default constructor called for ScavTrap" << std::endl;
}
ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->HitPoints = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
    std::cout << "parametrized constructor called for ScavTrap" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "Copy constructor called for ScavTrap" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "copy assignment operator called for ScavTrap" << std::endl;
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called for ScavTrap" << std::endl;

}
void ScavTrap::attack(const std::string &target)
{
    if (!this->EnergyPoint || !this->HitPoints)
        return;
    this->EnergyPoint--;
    std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " switched to guard gate mode" << std::endl;
}