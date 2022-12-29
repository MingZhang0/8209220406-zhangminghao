#include<cmath>
#include<iostream>
using namespace std;
bool is_valid(double side1,double side2,double side3)
{
	if(side1>side2)
	{
		double temp;
		temp=side1;
		side1=side2;
		side2=temp;//按从小到大排列；
	}
	if(side1>side3)
	{
		double temp;
		temp=side1;
		side1=side3;
		side3=temp;
	}
	if(side2>side3)
	{
		double temp;
		temp=side2;
		side2=side3;
	    side3=temp;
	}
	if(side1+side2<side3)
	{
	    return 0;
	}
	return 1;
}
double area(double side1,double side2,double side3)
{
	double s,M;
	s=(side1+side2+side3)/2;
	M=sqrt(s*(s-side1)*(s-side2)*(s-side3));
	return M;
}

