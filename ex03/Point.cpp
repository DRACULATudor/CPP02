#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float FlPointX, const float FlpointY) : x(FlPointX), y(FlpointY) {}

Point::Point(const Point &copy) : x(copy.x), y(copy.y) {}


Fixed Point::getX()const
{
    return this->x;
}

Fixed Point::getY()const
{
    return this->y;
}

Point &Point::operator=(const Point &cop)
{
    return *this;
}
//since the obj are constant no ressignation, just working for self assignment

bool Point::operator==(const Point &copiy)const{
    if (this->x == copiy.x && this->y == copiy.y)
        return true;
    return false;
}
