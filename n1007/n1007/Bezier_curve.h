#pragma once
#include "vector"
#include "Point.h"
#include <iostream>
#include "Point_2D.h"
#include "Point_3D.h"
class Bezier_curve
{
	int t;
	int N;
	std::vector<Point*> points_Zi;
	std::vector<double> split;
public:
	Bezier_curve(int t, int N, std::vector<Point_2D> points) : t(t), N(N) 
	{
		fun_split();
		for (int j = 0; j <= t; j++)
		{
			Point_2D *summ = new Point_2D;
			for (int i = 0; i <= N; i++) *summ = *summ + points[i] * Bk(i, split[j]);
			points_Zi.push_back(summ);
		}
		

	}
	Bezier_curve(int t, int N, std::vector<Point_3D> points) : t(t), N(N) 
	{
		fun_split();
		for (int j = 0; j <= t; j++)
		{
			Point_3D *summ = new Point_3D;
			for (int i = 0; i <= N; i++) *summ = *summ + points[i] * Bk(i, split[j]);
			points_Zi.push_back(summ);
		}
	}
	void fun_split();
	double factorial(int n);
	double Bk(int k, double t);
	std::string to_string();
	std::vector<Point*> return_points_Zi();
};


