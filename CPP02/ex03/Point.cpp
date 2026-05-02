#include "Point.hpp"

Point::Point(void):x(0), y(0){
    std::cout << "Default constructor called for point" << std::endl;
}
Point::Point(const Point &other){
    this->x = other.x;
    this->y = other.y;
    std::cout << "Copy constructor called for fixed" << std::endl;
}
Point::Point(const float x, const float y):x(Fixed(x)), y(Fixed(y)){}

Point &Point::operator=(const Point &other){
    if (this != &other)
    {
        this->x = other.x;
        this->y = other.y;
    }
    return *this;
}

Fixed Point::get_x(void) const
{
    return this->x;
}
Fixed Point::get_y(void) const
{
    return this->y;
}

Point::~Point(){};