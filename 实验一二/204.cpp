#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	char d;
	cin >> a;
	cin >> d;
	cin >> b;
	if(d=='+')
	{
		c=a+b;
		cout << c << endl;
	}
	else if(d=='-')
	{
		c=a-b;
		cout << c << endl;
	}
	else if(d=='*')
	{
		c=a*b;
		cout << c << endl;
	}
	else if(d=='/')
	{
		if(b==0)
		{
			cout << "Error." << endl;
		}
	    else
	   {   
	   c=a/b;
	   	cout << c << endl;
	   }	
	}
	else if(d=='%')
	{
		if(b==0)
		{
			cout << "Error." << endl;
		}
		else
		{
		c=a%b;
		cout << c << endl;	
		}
	}
	else
	{
		cout << "Error." << endl;
	}
	return 0;
}