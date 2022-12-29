#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	double x1,x2;
	cin >> a;
	x1=a/2;
	x2=(x1+a/x1)/2;
   while(fabs(x1-x2)>=1e-5)
    {
    	x1=x2;
    	x2=(x1+a/x1)/2;
	}
     cout << x2 << endl;
	return 0;
}