#pragma once
#include "string";
#include <iostream>
class Point
{
public:
	Point() {}
	Point(const Point &point) {}
	std::string virtual to_string() { return ""; }
};


