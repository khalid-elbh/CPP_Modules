#include "Zombie.hpp"


void Zombie::announce( void ){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name){
    this->name = name;
}

Zombie::Zombie(std::string name):name(name){}
Zombie::Zombie(void){}