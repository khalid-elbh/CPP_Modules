#include <iostream>
#include "Fixed.hpp"

#include <iostream>
int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}

// int main( void ) {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

//     std::cout << "--- Initialization and Arithmetic ---" << std::endl;
//     std::cout << "a: " << a << std::endl;
//     std::cout << "++a: " << ++a << std::endl;
//     std::cout << "a: " << a << std::endl;
//     std::cout << "a++: " << a++ << std::endl;
//     std::cout << "a: " << a << std::endl;

//     std::cout << "b: " << b << std::endl;

//     // Testing basic arithmetic
//     Fixed c = Fixed(10) + Fixed(5);
//     Fixed d = Fixed(10) - Fixed(5);
//     Fixed e = Fixed(10) * Fixed(2);
//     Fixed f = Fixed(10) / Fixed(2);

//     std::cout << "10 + 5 = " << c << std::endl;
//     std::cout << "10 - 5 = " << d << std::endl;
//     std::cout << "10 * 2 = " << e << std::endl;
//     std::cout << "10 / 2 = " << f << std::endl;

//     std::cout << "\n--- Comparison Operators ---" << std::endl;
//     Fixed const x(10);
//     Fixed const y(20);

//     std::cout << "x: " << x << " | y: " << y << std::endl;
//     std::cout << "x > y  : " << (x > y) << std::endl;
//     std::cout << "x < y  : " << (x < y) << std::endl;
//     std::cout << "x >= y : " << (x >= y) << std::endl;
//     std::cout << "x <= y : " << (x <= y) << std::endl;
//     std::cout << "x == y : " << (x == y) << std::endl;
//     std::cout << "x != y : " << (x != y) << std::endl;

//     std::cout << "\n--- Min / Max Functions ---" << std::endl;
//     // Testing Static Max
//     std::cout << "Max(a, b): " << Fixed::max( a, b ) << std::endl;
//     // Testing Static Min
//     std::cout << "Min(x, y): " << Fixed::min( x, y ) << std::endl;

//     std::cout << "\n--- Edge Case: Increment/Decrement ---" << std::endl;
//     Fixed z(0);
//     std::cout << "z: " << z << std::endl;
//     std::cout << "++z: " << ++z << " (should be the smallest epsilon)" << std::endl;
//     std::cout << "--z: " << --z << " (back to 0)" << std::endl;

//     return 0;
// }