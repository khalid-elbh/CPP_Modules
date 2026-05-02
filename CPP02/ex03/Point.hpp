#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
    private:
        Fixed x;
        Fixed y;
    public:
        Point(void);
        Point(const Point &other);
        Point(const float x, const float y);
        Point &operator=(const Point &other);
        Fixed get_x(void)const;
        Fixed get_y(void)const;
        ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif