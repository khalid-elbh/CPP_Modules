#include "Zombie.hpp"


int main(){
    int N = 9;

    Zombie *newzz = zombieHorde(N,"dead");
    for (int i = 0; i < N; i++){
        (newzz + i)->announce();
    }
    delete[] newzz;
}