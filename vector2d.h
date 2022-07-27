#pragma once
#include<ostream>
#include <array>


class vector2d
{

public:
	int x;
	int y;
	vector2d();
	vector2d(int _x,int _y);
	vector2d operator +(vector2d const &other) const;
	vector2d operator -(vector2d const &other) const;
	vector2d operator *(float const &other) const;
	const char* str();

	float AngleBetween(vector2d other);
	vector2d RotateByAngle(float const  &angle);
	vector2d Perpendicular();
	vector2d Normalized();
	float Magnitude();

};
