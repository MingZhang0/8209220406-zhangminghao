#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
	double stop=sqrt(num);
	if(num==1)
	{
		return 0;
	}
   for(int k=2;k<=stop;k++)
   {
   	if(num%k==0)
   	{
	   return 0;	
	}
    }
		return 1;
}
int prime()
{
	int size=0;
	for(int i=1;size<200;i++)
	{
		if(is_prime(i))
		{
			cout << i << "\t";
			if((size+1)%10==0)
			cout << endl;
			size++;
		}
	}
	return 0;
}
int main()
{
    prime();
	return 0;
}