#include<iostream>
using namespace std;
int main()
{
	float price1=0;
	float average=0;
	int a=2,n=0;
	for(int a=2;a<=100;a=a*2)
	{ 
		price1=(a*0.8)+price1;
		n++;
	}
	cout << n << endl;
	cout << price1 << endl;
	average=price1/(n);
	cout << average << endl;
	return 0;
}