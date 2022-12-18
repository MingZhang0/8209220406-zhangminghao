#include<iostream>
#include<string>
using namespace std;
int sort(int p[],int size)
{
	int temp;
	for(int k=0;k<size;k++)
	{
	for(int i=0;i<size-1;i++)
	{
		if(*(p+1+i)<*(p+i))
		{
			temp=*(p+i+1);
			*(p+i+1)=*(p+i);
			*(p+i)=temp;
		}
	}
    }
    return 0;
}
int main()
{
	int size,l;
	cin >> size;
	int *p;
	p=new int[size];
	for(int m=0;m<size;m++)
	{
		cin >> *(p+m);
	}
	cout << "Enter the number of this arr:" << endl;
	cin >> l;
	cout << *(p+l-1) << endl;;
	sort(p,size);
	for(int m=0;m<size;m++)
	{
		cout << *(p+m) << "\t";
	}
	delete p;
	return 0;
}