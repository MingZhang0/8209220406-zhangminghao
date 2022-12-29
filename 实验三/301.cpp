#include <iostream>
using namespace std;
int func(int &m,int &n)
{
	if(m>n)//将m，n排序，使n总是大的那个；
	{
		int temp;
		temp=m;
		m=n;
		n=temp;
	}
	if(n%m==0)
	{
		cout  << m << endl;
		cout  << n << endl;
	}
	else
	{
		cout  << 1 << endl; 
		cout  << m*n << endl;
	}
	return 0;
	
}
int main()
{
    int m,n;
	cin >> m >> n;
	func(m,n);
	return 0;	
}
