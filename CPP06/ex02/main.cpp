#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <exception>

Base * generate(void){
    srand(time(NULL));
    int ran = rand();
    if (ran % 3 == 0)
        return new A();
    else if (ran % 3 == 1)
        return new B();
    else
        return new C();
    return (NULL);
}


void identify(Base* p){
    if (dynamic_cast<A *>(p))
        std::cout << "the actual type of the object pointed to by p: A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout <<  "the actual type of the object pointed to by p: B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout <<  "the actual type of the object pointed to by p: C" << std::endl;
}

void identify(Base& p){
    try{
        dynamic_cast<A &>(p);
        std::cout << "the actual type of the object referenced by p: A" << std::endl;
    }
    catch(std::exception &e){}
    try{
        dynamic_cast<B &>(p);
        std::cout << "the actual type of the object referenced by p: B" << std::endl;
    }catch(std::exception &e){}
    try{
        dynamic_cast<C &>(p);
        std::cout << "the actual type of the object referenced by p: C" << std::endl;
    }catch(std::exception &e){}
}

int main(){
    Base *B = generate();
    identify(B);
    identify(*B);
    delete B;
}
