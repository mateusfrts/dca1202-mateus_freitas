#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"

using namespace std;

Point::Point(float mx, float my)
{
    setXY(mx,my);
}

void Point::operator*(float a)
{
    x = x*a;
    y = y*a;
}

void Point::operator=(Point _p)
{
    x = _p.x;
    y = _p.y;
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

void Point::imprimir()
{
    cout << "(" << x << ", " << y << ")";
}
