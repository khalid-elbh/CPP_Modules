#include "Fixed.hpp"

const int Fixed::NOFB = 8;

/*------constructors---------*/
Fixed::Fixed(void) : rawBits(0)
{
    std::cout << "Default constructor called for fixed" << std::endl;
}

Fixed::Fixed(const Fixed &other) : rawBits(other.rawBits)
{
    std::cout << "Copy constructor called for fixed" << std::endl;
}

Fixed::Fixed(const int value)
{
    this->rawBits = value << this->NOFB;
    std::cout << "Int constructor called for fixed" << std::endl;
}

Fixed::Fixed(const float value)
{
    this->rawBits = roundf(value * (1 << this->NOFB));
    std::cout << "Float constructor called for fixed" << std::endl;
}

/*------------------------operators-------------------------*/
std::ostream &operator<<(std::ostream &out, const Fixed &fixP)
{
    out << fixP.toFloat();
    return out;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called for fixed" << std::endl;
    if (this != &other)
        this->rawBits = other.getRawBits();
    return *this;
}

/*                 comparison operators                   */
bool Fixed::operator<(const Fixed &other) const
{
    if (this->rawBits < other.rawBits)
        return true;
    else
        return false;
}

bool Fixed::operator>(const Fixed &other) const
{
    if (this->rawBits > other.rawBits)
        return true;
    else
        return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
    if (this->rawBits <= other.rawBits)
        return true;
    else
        return false;
}
bool Fixed::operator>=(const Fixed &other) const
{
    if (this->rawBits >= other.rawBits)
        return true;
    else
        return false;
}

bool Fixed::operator==(const Fixed &other) const
{
    if (this->rawBits == other.rawBits)
        return true;
    else
        return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
    if (*this == other)
        return false;
    else
        return true;
}

/*         arithmetic operators         */

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed res;
    res.rawBits = this->rawBits + other.rawBits;
    return res;
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed res;
    res.rawBits = this->rawBits - other.rawBits;
    return res;
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed res;
    res.rawBits = this->rawBits * other.rawBits;
    res.rawBits >>= res.NOFB;
    return res;
}

Fixed &Fixed::operator++()
{
    this->rawBits++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp;
    tmp = *this;
    this->rawBits++;
    return tmp;
}

Fixed &Fixed::operator--()
{
    this->rawBits--;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed tmp;
    tmp = *this;
    this->rawBits--;
    return tmp;
}


/*-------------methods---------------*/
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
    this->rawBits = raw;
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
/*-----------------destructor------------------*/

Fixed::~Fixed()
{
    std::cout << "Destructor called for fixed" << std::endl;
}