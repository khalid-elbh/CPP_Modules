#include <iostream>
#include "Point.hpp"

int main(void)
{
    // Triangle vertices
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);

    // Point inside the triangle
    Point p1(3.0f, 3.0f);

    // Point outside the triangle
    Point p2(10.0f, 10.0f);

    // Point on an edge (should return false in the subject)
    Point p3(5.0f, 0.0f);

    std::cout << "p1 inside triangle: "
              << (bsp(a, b, c, p1) ? "true" : "false") << std::endl;

    std::cout << "p2 inside triangle: "
              << (bsp(a, b, c, p2) ? "true" : "false") << std::endl;

    std::cout << "p3 inside triangle: "
              << (bsp(a, b, c, p3) ? "true" : "false") << std::endl;

    return 0;
}