#include "BinSearchTree.hpp"
// Area of random triangle = [x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)] / 2
// To find wether the point is inside the triangle or not after calculating the area, will be by calculating
// the area of the triangle (Point, a, b).= a1.
// the area of the triangle (Point, b, c). = a2.
// the area of the triangle (Point, a, c). = a3.
// If point is inside the triangle, then a1 + a2 + a3 must be equal to a.

Fixed Surface(Point const a, Point const b, Point const c)
{
    Fixed area;
    area = ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0f).abso();
    return area.abso();
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    if (point == a || b == point || c == point)
    {
        std::cout << "Point is located on one of the edges of the triangle" << std::endl;
        return false;
    }
    if ((point.getX() == a.getX() && point.getY() == a.getY()) ||
        (point.getX() == b.getX() && point.getY() == b.getY()) ||
        (point.getX() == c.getX() && point.getY() == c.getY()))
    {
        std::cout << "Point is located on the edge of the triangle" << std::endl;
        return false;
    }
    Fixed area = Surface(a, b, c);
    Fixed a1 = Surface(point, a, b);
    Fixed a2 = Surface(point, b, c);
    Fixed a3 = Surface(point, a, c);
    if (a1 + a2 + a3 == area)
    {
        std::cout << "Point is located inside the triangle" << std::endl;
        return true;
    }
    std::cout << "Point is located outside the triangle" << std::endl;
    return false;
}