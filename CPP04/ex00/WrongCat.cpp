#include "WrongCat.hpp"


WrongCat::WrongCat(void): WrongAnimal(){
    this->type = "WrongCat";
    std::cout << "default constructor is called for WrongCat" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other){
    std::cout << "copy constructor is called for WrongCat" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &other){
    if (this != &other)
        WrongAnimal::operator=(other);
    std::cout << "copy assignment operator is called for WrongCat" << std::endl;
    return *this;
}
WrongCat::~WrongCat(){
    std::cout << "Destructor is called for WrongCat" << std::endl;
}

void WrongCat::makeSound(void)const{
    std::cout << "Woof Woof" << std::endl;
}