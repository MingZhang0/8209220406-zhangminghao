/*将每一个数依次与后面的数进行比较，若有重复的数则将该重复的数后面一个数赋值给该重复的数，后面的数都往前一位*/
#include <iostream>
using namespace std;
int main()
{
	const int size=10;
	int list[size];
	cout << "Enter ten numbers:" << endl;
	for(int i=0;i<size;i++)
	{
		cin >> list[i];
	}
	cout << list[0] <<"\t";
	for(int m=1;m<size;m++)
	{
		for(int j=0;j<m;j++)
		{
		if(list[m]!=list[j])
		{
			if(j==m-1)
			{
				cout <<list[m]<<"\t";
			}
			else
			{
				continue;
			}
		}
		else
		{
			break;
		}
	   }
	}
	return 0;
}