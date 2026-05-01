#include "Zombie.hpp"

int main(){
    Zombie *zz = newZombie("Walker1");
    zz->announce();
    randomChump("www");
    Zombie xx;
    xx.setname("khalid");
    xx.announce();
    delete zz;
}