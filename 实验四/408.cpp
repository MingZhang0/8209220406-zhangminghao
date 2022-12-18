#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int parseHex(const char*const hexString)
{
   int a,sum=0;
   a=strlen(hexString);
   int list[a];
   for(int i=0;i<a;i++)
   {
   	if(hexString[i]>='A'&&hexString[i]<='F')
   	{
   	list[i]=(static_cast<int>(hexString[i])-55)*(pow(16,a-1-i));
    }
    else
    {
    	list[i]=(hexString[i]-48)*pow(16,a-1-i);
    }
    sum=sum+list[i];
   }
   return sum;
}
int main(){
	char * str;
	str= new char[20];
	cin.get(str,20);
	cout << parseHex(str) << endl;
	return 0;
}