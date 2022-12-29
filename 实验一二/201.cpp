#include<iostream>
using namespace std;
int main()
{
	char alph;
	cin >> alph;
	if(alph>=97&&alph<=122)
	{
		alph=toupper(alph);
		cout << alph << endl;
	}
	else
	{
		cout << int(alph) << endl;
	}
	return 0;
}