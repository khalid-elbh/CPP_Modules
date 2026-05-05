#include "AMateria.hpp"


AMateria::AMateria(void){
    std::cout << "default constructor is called for AMateria" << std::endl;
}
AMateria::AMateria(const AMateria &other): type(other.type){
    std::cout << "copy constructor is called for AMateria" << std::endl;
}
AMateria::AMateria(std::string const &type): type(type){
    std::cout << "parameterized constructor is called for AMateria" << std::endl;
}

AMateria::~AMateria(){
    std::cout << "destructor is called for AMateria" << std::endl;
}
AMateria& AMateria::operator=(const AMateria &other){
    (void) other;
    std::cout << "copy assignment operator is called for AMateria" << std::endl;
    return *this;
}
std::string const &AMateria::getType() const{
    return this->type;
}
void AMateria::use(ICharacter &target){
    (void) target;
}
