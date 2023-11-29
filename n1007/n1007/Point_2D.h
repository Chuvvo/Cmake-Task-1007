#pragma once
#include "Point.h"
class Point_2D :
    public Point
{
public:
    double x, y;
    Point_2D() : x(0), y(0) {}
    Point_2D(double x, double y) : x(x), y(y) {}
    Point_2D(const Point_2D& point) : x(point.x), y(point.y) {}
    std::string to_string();
    Point_2D operator +(const Point_2D& point);
    Point_2D operator *(const double a);
};

