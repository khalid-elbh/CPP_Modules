#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int rawBits;
    static const int NOFB;

public:
    Fixed(void);
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    /*         comparison operators       */
    bool operator<(const Fixed &other) const;
    bool operator>(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;
    /*         arithmetic operators         */
    Fixed operator+(const Fixed &other)const;
    Fixed operator-(const Fixed &other)const;
    Fixed operator*(const Fixed &other)const;
    Fixed operator/(const Fixed &other) const;
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
    /*overloaded member functions*/
    static Fixed &min(Fixed &f1, Fixed &f2);
    static const Fixed &min(const Fixed &f1,const Fixed &f2);
    static Fixed &max(Fixed &f1, Fixed &f2);
    static const Fixed &max(const Fixed &f1,const Fixed &f2);
    ~Fixed();

    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixP);

#endif