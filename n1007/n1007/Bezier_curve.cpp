#include "Bezier_curve.h"

void Bezier_curve::fun_split()
{
	for (double i = t; i >= 0; i--)
	{
		split.push_back(((double)(t - i)) / t);
	}
}
double Bezier_curve::factorial(int n)
{
	if (n == 0.)
		return 1.;
	return double(n * factorial(n - 1));
}
double Bezier_curve::Bk(int k, double t)
{
	return (factorial(N) / (factorial(k) * factorial((N - k)))) * pow(t, k) * pow((1 - t), (N - k));
}

std::string Bezier_curve::to_string()
{
	std::string str;
	for (int i = 0; i <= t; i++)
		str += points_Zi[i]->to_string();
	return str;
}
std::vector<Point*> Bezier_curve::return_points_Zi()
{
	return points_Zi;
}
