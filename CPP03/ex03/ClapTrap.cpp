#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : HitPoints(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "Default constructor called for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other):Name(other.Name) ,HitPoints(other.HitPoints), EnergyPoint(other.EnergyPoint), AttackDamage(other.AttackDamage){
    std::cout << "Copy constructor called for ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string Name):Name(Name), HitPoints(10), EnergyPoint(10), AttackDamage(0){
    std::cout << "Parametrized constructor called for ClapTrap" << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &other){
    if (this != &other)
    {
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoint = other.EnergyPoint;
        this->AttackDamage = other.AttackDamage;
    }
    std::cout << "Copy assignment operator called for ClapTrap" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (!this->EnergyPoint || !this->HitPoints)
        return;
    this->EnergyPoint--;
    std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (!this->HitPoints)
        return ;
    this->HitPoints-= amount;
    if (this->HitPoints < 0)
        this->HitPoints = 0;
    std::cout << "ClapTrap " << this->Name << " received " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (!this->EnergyPoint || !this->HitPoints)
        return;
    this->EnergyPoint--;
    this->HitPoints+=amount;
    std::cout << "ClapTrap " << this->Name << " casts repair gaining " << amount << " points of Hit Points!" << std::endl;
}