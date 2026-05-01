#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *newzz = new Zombie[N];
    for (int i = 0; i < N ; i++){
        (newzz + i)->setname(name);
    }
    return newzz;
}