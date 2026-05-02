#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed{
    private:
        int rawBits;
        static const int NOFB;

    public:
        Fixed(void);
        Fixed(Fixed &other);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif