#include "Fixed.hpp"

const int Fixed::NOFB = 8;

Fixed::Fixed(const int value)
{
    this->rawBits = value << this->NOFB;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    this->rawBits = roundf(value * (1 << this->NOFB));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    float tmp = 1 << this->NOFB;
    return this->rawBits / tmp;
}

int Fixed::toInt(void) const
{
    return this->rawBits >> this->NOFB;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixP)
{
    out << fixP.toFloat();
    return out;
}

Fixed::Fixed(void) : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &other) : rawBits(other.rawBits)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &other)
        this->rawBits = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->rawBits = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}