#include "Zombie.hpp"

Zombie::Zombie(std::string name):name(name){}
Zombie::Zombie(){}
void Zombie::announce( void ){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name){
    this->name = name;
}