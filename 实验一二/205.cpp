#include<iostream>
#include<string>
#include<istream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int a=0,b=0,c=0,d=0;
	int i=0;
	while(str[i]!=0)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			++a;
		}
		else if(str[i]==' ')
		{
			++b;
		}
		else if((str[i]>='0')&&(str[i]<='9'))
		{
			++c;
		}
		else
		{
			++d;
		}
		i++;
	}
	cout << a<< endl;
	cout << b<< endl;
	cout << c << endl;
	cout << d<< endl;
	return 0;
	
}