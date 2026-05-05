#include "Animal.hpp"


Animal::Animal(void): type("Animal"){
    std::cout << "default constructor is called for Animal" << std::endl;
}
Animal::Animal(const Animal &other) : type(other.type){
    std::cout << "copy constructor is called for Animal" << std::endl;
}
Animal::~Animal(){
    std::cout << "Destructor is called for Animal" << std::endl;
}
Animal &Animal::operator=(const Animal &other){
    if (this != &other){
        this->type = other.type;
    }
    std::cout << "copy assignment operator is called for Animal" << std::endl;
    return *this;
}

void Animal::makeSound(void)const{
    std::cout << "Animal sound" << std::endl;
}


std::string Animal::getType(void)const{
    return this->type;
}