#include<iostream>
using namespace std;
const int size=10;
void bubblesort(double list[10])
{
	double temp;
	bool changed=true;
	do
	{
		changed=false;
		for(int j=0;j<size-1;j++)
		{
			if(list[j]>list[j+1])
			{
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
				changed=true;
			}
		}
	}while(changed);
}
int main()
{
	double list[10];
	for(int i=0;i<size;i++)
	{
		cin >> list[i];
	}
	bubblesort(list);
	for(int k=0;k<10;k++)
	{
		cout << list[k] << "\t";
	}
	return 0;
}