#include<iostream>
using namespace std;
const int q=1;
int main()
{
	bool box[100];
	for(int k=0;k<100;k++)
	{
		box[k]=false;
	}

	for(int m=0;m<100;m++)
	{
		for(int n=m;n<100;n+=m+1)
		{
		    if(box[n]==true)
		    {
		    	box[n]=false;
			}
			else
			{
				box[n]=true;
			}
		}
	}
	for(int p=0;p<100;p++)
	{
		if(box[p]==true)
		{
			cout << p+1 <<"\t";
		}
	}
	return 0;
}