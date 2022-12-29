#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float C,F;
	cin >> F;
	C=5*(F-32)/9;
	cout <<  setprecision(3) << endl;
	cout << C << endl;
	return 0;
}