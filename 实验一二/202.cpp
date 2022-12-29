#include<iostream>
using namespace std;
int main()
{
	double x;
	double y;
	cin >> x;
	if(x<1&&x>0)
	{
		y=3-2*x;
	}
	else if(x<5&&x>=1)
	{
		y=2/(4*x)+1;
	}
	else if(x>=5&&x<10)
	{
		y=x*x;
	}
	else
	{
		cout << "Error." << endl;
	}
	cout << y << endl;
	return 0;
}