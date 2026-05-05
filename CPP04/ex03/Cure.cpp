
#include "Cure.hpp"


Cure::Cure(void): AMateria("cure"){
    std::cout << "default constructor is called for Cure" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other){
    std::cout << "copy constructor is called for Cure" << std::endl;
}

Cure::~Cure(){
    std::cout << "destructor is called for Cure" << std::endl;
}

Cure& Cure::operator=(const Cure &other){
    if (this != &other)
        AMateria::operator=(other);
    std::cout << "copy assignment operator is called for Cure" << std::endl;
    return *this;
}

AMateria* Cure::clone() const
{
    return  new Cure();
}

void Cure::use(ICharacter &target)
{
    std::cout <<  "* heals " << target.getName()  << "’s wounds *" <<std::endl;
}
