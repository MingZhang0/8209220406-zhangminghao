#include <iostream>
using namespace std;
const int num1=26;
const int num2=99;
void count(const char s[],int counts[])
{
	for(int i=0;i<num1;i++)
	{
		counts[i]=0;
	}
	for(int k=0;k<num2;k++)
	
	{
		counts[s[k]-'a']++;
		counts[s[k]-'A']++;
	}
	for(int j=0;j<num1;j++)
	{
		if(counts[j]!=0)
		{
			cout << static_cast<char>(j+'a') << ":" << counts[j] << "times" << endl;
		}
	}
}
int main()
{
	char s[num2];
	int counts[num1];
	cout << "Enter a string:";
	cin.getline(s,num2);
	count(s,counts);
	return 0;
}