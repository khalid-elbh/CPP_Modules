#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    std::string name;
    Weapon &wpn;
    public:
    HumanA(std::string name, Weapon &wpn);
    void attack(void);
};

#endif