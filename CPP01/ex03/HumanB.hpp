#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    std::string name;
    Weapon *wp;
    public:
    HumanB(std::string name);
    void setWeapon(Weapon &wp);
    void attack(void);
};

#endif