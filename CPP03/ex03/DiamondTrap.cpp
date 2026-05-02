#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void) :ClapTrap(), ScavTrap(), FragTrap()
{
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoint = 50;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "Default constructor called for DiamondTrap" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) ,ScavTrap(other) , FragTrap(other) ,Name(other.Name){
    std::cout << "Copy constructor called for DiamondTrap" << std::endl;
}
DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"),  Name(Name)
{
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoint = 50;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "Parametrized constructor called for DiamondTrap" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
    if (this != &other)
    {
        ClapTrap::operator=(other);
        this->Name = other.Name;
    }
    std::cout << "Copy assignment operator called for DiamondTrap" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "Destructor called for DiamondTrap" << std::endl;
}

void DiamondTrap::whoAmI(void){
    std::cout << "DiamondTrap name: " << this->Name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::Name << std::endl;
}

void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}