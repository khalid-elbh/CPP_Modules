#include "Cat.hpp"


Cat::Cat(void): Animal(){
    this->type = "Cat";
    std::cout << "default constructor is called for Cat" << std::endl;
}
Cat::Cat(const Cat &other): Animal(other){
    std::cout << "copy constructor is called for Cat" << std::endl;
}
Cat &Cat::operator=(const Cat &other){
    if (this != &other)
        Animal::operator=(other);
    std::cout << "copy assignment operator is called for Cat" << std::endl;
    return *this;
}
Cat::~Cat(){
    std::cout << "Destructor is called for Cat" << std::endl;
}

void Cat::makeSound(void)const{
    std::cout << "Woof Woof" << std::endl;
}