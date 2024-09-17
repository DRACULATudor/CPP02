#include "BinSearchTree.hpp"

int main()
{
    // Ez testcase w ints, point is inside

    // Point a(0, 0);
    // Point b(10, 30);
    // Point c(20, 0);
    // Point p(10, 15);

    // Float testcase w point inside
    // Point a(0.0f, 0.0f);
    // Point b(10.0f, 30.0f);
    // Point c(20.0f, 0.0f);
    // Point p(10.0f, 15.0f);

    // test which point is on the edge
    // Point a(0.0f, 0.0f);
    // Point b(10.0f, 30.0f);
    // Point c(20.0f, 0.0f);
    // Point p(10.0f, 0.0f);

    // point is oustide
    Point a(0.0f, 0.0f);
    Point b(-10.0f, -30.0f);
    Point c(-20.0f, 0.0f);
    Point p(-10.0f, -9.99f);
    bsp(a, b, c, p);
    return 0;
}
