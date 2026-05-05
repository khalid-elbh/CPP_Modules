#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void): type("WrongAnimal"){
    std::cout << "default constructor is called for WrongAnimal" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type){
    std::cout << "copy constructor is called for WrongAnimal" << std::endl;
}
WrongAnimal::~WrongAnimal(){
    std::cout << "Destructor is called for WrongAnimal" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    if (this != &other){
        this->type = other.type;
    }
    std::cout << "copy assignment operator is called for WrongAnimal" << std::endl;
    return *this;
}

void WrongAnimal::makeSound(void)const{
    std::cout << "WrongAnimal sound" << std::endl;
}


std::string WrongAnimal::getType(void)const{
    return this->type;
}