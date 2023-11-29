#include "Point_2D.h"

std::string Point_2D::to_string()
{
    std::string str = std::to_string(x) + ' ' + std::to_string(y);
    return str;
}
Point_2D Point_2D::operator +(const Point_2D& point)
{
    return Point_2D(x + point.x, y + point.y);
}
Point_2D Point_2D::operator *(const double a)
{
    return Point_2D(x * a, y * a);
}