#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int i=0;
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<n-1-i;j++)
	   {
	   cout << " ";
       }
	   for(int j=n-1-i;j<n;j++)
	   {
	   cout << "*";
       }
	   cout <<"\n"<< endl;
    }
	   return 0;
}