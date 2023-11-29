#include "Data.h"


void Data::read_info()
{
    std::vector<double> data;
    in.open(txt_in);
    if (in.is_open())
    {
        in >> R;
        in >> N;
        in >> T;
        in.close();
    }
}
std::vector<Point_2D> Data::read_points_2D(int num)
{
    std::vector<Point_2D> data;
    in.open(txt_in);
    if (in.is_open())
    {
        double x, y;
        int skip;
        in >> skip;
        in >> skip;
        in >> skip;
        for (int i = 0; i < num; i++)
        {
            in >> x;
            in >> y;
            Point_2D point(x, y);
            data.push_back(point);
        }
        in.close();
    }
    return data;
}
std::vector<Point_3D> Data::read_points_3D(int num)
{
    std::vector<Point_3D> data;
    in.open(txt_in);
    if (in.is_open())
    {
        double x, y, z;
        int skip;
        in >> skip;
        in >> skip;
        in >> skip;
        for (int i = 0; i < num; i++)
        {
            in >> x;
            in >> y;
            in >> z;
            Point_3D point(x, y, z);
            data.push_back(point);
        }
        in.close();
    }
    return data;
}
void Data::write(std::vector<Point*> data)
{
    out.open(txt_out);
    if (out.is_open())
    {
        for (int i = 0; i < data.size(); i++)
            out << data[i]->to_string() << std::endl;
        out.close();
    }
}