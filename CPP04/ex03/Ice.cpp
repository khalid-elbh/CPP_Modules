
#include "Ice.hpp"

Ice::Ice(void): AMateria("ice"){
    std::cout << "default constructor is called for Ice" << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other){
    std::cout << "copy constructor is called for Ice" << std::endl;
}

Ice::~Ice(){
    std::cout << "destructor is called for Ice" << std::endl;
}

Ice& Ice::operator=(const Ice &other){
    if (this != &other)
        AMateria::operator=(other);
    std::cout << "copy assignment operator is called for Ice" << std::endl;
    return *this;
}

AMateria* Ice::clone() const
{
    return  new Ice();
}

void Ice::use(ICharacter &target)
{
    std::cout <<  "* shoots an ice bolt at " << target.getName()  << " *" <<std::endl;
}
