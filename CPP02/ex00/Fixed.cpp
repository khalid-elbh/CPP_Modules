#include "Fixed.hpp"

const int Fixed::NOFB = 8;

Fixed::Fixed(void):rawBits(0){
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed &other):rawBits(other.rawBits){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other){
    std::cout << "Copy assignment operator called " << std::endl;
    this->rawBits = other.NOFB;
    return *this;
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->rawBits;
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->rawBits = raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
