#pragma once
#include <fstream>
#include "string"
#include "Point_2D.h"
#include "Point_3D.h"
#include "Bezier_curve.h"
#include <vector>
class Data
{
    std::ifstream in;
    std::ofstream out;
    std::string txt_in;
    std::string txt_out;
public:
    int R, N, T;
    Data(std::string in, std::string out) : txt_in(in), txt_out(out), R(0), N(0), T(0) {}

    void read_info();
    std::vector<Point_2D> read_points_2D(int num);
    std::vector<Point_3D> read_points_3D(int num);
    void write(std::vector<Point*> data);
};

