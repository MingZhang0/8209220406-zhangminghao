#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a;
	cin >> b;
    if(a<b)
    {
    	int temp;
    	temp=a;
    	a=b;
    	b=temp;
	}
	if(a%b==0)
	{
		cout << "greatest common divisor:" << b << endl;//最大公约数
		cout << "Maximum common multiple:" << a << endl;//最大公倍数
	}
	else
	{
	   cout << "greatest common divisor:" << 1 << endl;//最大公约数
	   cout << "Maximum common multiple:" << a*b << endl;//最大公倍数
	}
	return 0;
}