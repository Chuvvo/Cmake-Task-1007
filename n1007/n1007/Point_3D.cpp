#include "Point_3D.h"

std::string Point_3D::to_string()
{
    std::string str = std::to_string(x) + ' ' + std::to_string(y) + ' ' + std::to_string(z);
    return str;
}
int Point_3D::point_type()
{
    return 3;
}
Point_3D& Point_3D::operator =(const Point_3D& point)
{
    x = point.x;
    y = point.y;
    z = point.z;
    return *this;

}
Point_3D Point_3D::operator+ (const Point_3D& point)
{
    return Point_3D(x + point.x, y + point.y, z + point.z);
}
Point_3D Point_3D::operator *(const double a)
{
    return Point_3D(x * a, y * a, z * a);
}