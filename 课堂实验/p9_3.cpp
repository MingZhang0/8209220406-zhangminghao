#include <iostream>
#include <queue>
using namespace std;
template <class T>
void print (queue<T>&q)
{
	if(q.empty())
	{
		cout << "Queue is empty!" << endl;
	}
	else
	{
		int j=q.size();
		for(int i=0;i<j;i++)
		{
			cout << q.front() << " ";
			q.pop();
		}
		cout << endl;
	}
}
int main()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout << "The first element is:" << q.front() << endl;
	cout << "The last element is:" << q.back() << endl;
	cout << "The queue is:" << endl;
	print(q);
	return 0;
}