#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	float C;
	cin >> a;
	cin >> b;
	cin >> c;
	if(a+b<=c||a+c<=b||b+c<=a)//最好不要从正面判断
	
	{
	cout << "Error." << endl;
    }
	else
	{
		C=a+b+c;
	cout << C << endl;	
	if(a==b||a==c||b==c)//一个等号是赋值 ；两个等号才是相等
	{
		cout << "This is a isosceles triangle." << endl;
	}
	}
	return 0;
}