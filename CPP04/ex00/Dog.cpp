#include "Dog.hpp"


Dog::Dog(void): Animal() {
    this->type = "Dog";
    std::cout << "default constructor is called for Dog" << std::endl;
}
Dog::Dog(const Dog &other): Animal(other){
    std::cout << "copy constructor is called for Dog" << std::endl;
}
Dog &Dog::operator=(const Dog &other){
    if (this != &other)
        Animal::operator=(other);
    std::cout << "copy assignment operator is called for Dog" << std::endl;
    return *this;
}
Dog::~Dog(){
    std::cout << "Destructor is called for Dog" << std::endl;
}

void Dog::makeSound(void)const{
    std::cout << "Meow Meow" << std::endl;
}