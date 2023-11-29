#pragma once
#include "Point.h"
#include <iostream>
class Point_3D :
    public Point
{
public:
    double x, y, z;
    Point_3D() : x(0), y(0), z(0) {}
    Point_3D(double x, double y, double z) : x(x), y(y), z(z) {}
    Point_3D(const Point_3D& point) : x(point.x), y(point.y), z(point.z) {}
    std::string to_string();
    int point_type();
    Point_3D& operator =(const Point_3D& point);
    Point_3D operator+ (const Point_3D& point);
    Point_3D operator *(const double a);
};


