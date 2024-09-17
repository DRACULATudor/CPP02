#pragma once
#include "Fixed.hpp"

class Point
{
private:
   const Fixed x;
   const Fixed y;

public:
    Point();
    Point(const Point &copy);
    Point(const float FlPointX, const float FlpointY);
    Point &operator=(const Point &copiy);
    Fixed getX() const;
    Fixed getY() const;
    bool operator==(const Point &copiy)const;
};
