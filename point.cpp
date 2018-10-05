#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point(float mx, float my)
{
    setXY(mx,my);
}

Point::Point(Point &p1)
{
    x = p1.x;
    y = p1.y;
}

Point Point::add(Point p1)
{
    Point ret;

    ret.x = x + p1.x;
    ret.y = y + p1.y;

    return ret;
}

Point Point::sub(Point p1)
{
    Point ret;

    ret.x = x - p1.x;
    ret.y = y - p1.y;

    return ret;
}

float Point::norma()
{
    return sqrtf(x*x + y*y);
}

void Point::translada(float a, float b)
{
    x = x + a;
    y = y + b;
}

void Point::imprime()
{
    cout << "(" << x << ", " << y << ")";
}
