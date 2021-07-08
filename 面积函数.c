#include"triangle.h"

float area(float a, float b, float c)
{
	float s, area;
	s=perimeter(a,b,c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}