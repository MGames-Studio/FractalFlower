#include "vector2d.h"
#include <math.h>
#include <stdio.h>
#include <cstring>
#include <array>


vector2d::vector2d()
{

	x = 0;
	y = 0;
}

vector2d::vector2d(int _x,int _y){ 
	x = _x;
	y = _y;

}
vector2d vector2d::operator +(vector2d const &other){	return vector2d(x+other.x,y+other.y); }
vector2d vector2d::operator -(vector2d const &other){	return vector2d(x-other.x,y-other.y); }
vector2d vector2d::operator *(float const &other){	return vector2d(x*other,y*other); }


float vector2d::AngleBetween(vector2d other)
{
	float dot = x*other.x + y*other.y;     
	float det = x*other.y - y*other.x;     
	return atan2(det, dot);
}

vector2d vector2d::RotateByAngle(float const &angle){	

	int newX = x * cos(angle) - y * sin(angle);
	int newY = x * sin(angle) + y * cos(angle);
	return vector2d(newX,newY); 

}


vector2d vector2d::Perpendicular()
{
	return this->RotateByAngle(3.14/2);

}
vector2d vector2d::Normalized()
{
	//this normalizing funciton is not actually normalizing cause x and y can't be decimals
	//its awful i know

	if(x==0 and y == 0)
		return vector2d(0,0);

	const float decidingAngle = vector2d(0,1).AngleBetween(*this)*57.295+180;


	const std::array<vector2d,8> rotatingVectors = {	 vector2d(0,-1),vector2d(1,-1),	vector2d(1,0),	vector2d(1,1),	vector2d(0,1),	vector2d(-1,1),	vector2d(-1,0),vector2d(-1,-1)	};

	for (int i = 0; i<8; ++i)
	{
		if((i+1)*45-22.5>decidingAngle)
		{
			return rotatingVectors[i];
		}
	}
	return rotatingVectors[0];

	
}
float vector2d::Magnitude()
{
	return sqrt(this->x*this->x + this->y*this->y);
}
const char* vector2d::str()
{

	return "not implemented";
}

