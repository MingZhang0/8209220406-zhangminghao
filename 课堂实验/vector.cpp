#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
	vector<double> scorevector;
	map <int,double> score_map;
	score_map.emplace(3,90.0);
	cout << "NO.3 score:" <<  score_map[3]  << endl;
	//scorevector.push_back(3.0);//插入的数据的类型必须和声明的数据类型一致
	int size_n;
	cout << "Please enter the number:" << endl;
	cin >> size_n;
	for(int i=0;i<size_n;i++)
	{
		int t;
		cin >> t;
		scorevector.push_back(t);
		cout << scorevector.size() << endl;
	    cout << scorevector.capacity() << endl;
		
	}
	for(int i=0;i<scorevector.size();i++)
	{
		cout <<"NO." << i << ":" << scorevector[i] << endl;
	} 
	vector<double>::iterator vector_it;
	for(vector_it=scorevector.begin();vector_it!=scorevector.end();vector_it++)
	{
		cout << "NO." << *vector_it << endl;
	}
	while(!scorevector.empty())
	{
		double t=scorevector.back();
	    scorevector.pop_back();
	    cout << t << endl;
	}
	cout << scorevector.size() << endl;
	cout << scorevector.capacity() << endl;
	return 0;
}