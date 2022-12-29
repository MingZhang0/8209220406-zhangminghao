#include <iostream>
#include <deque>
using namespace std;
template<class T>
void print(T &deq,char*str)
{
	 typename T::iterator it;
	cout << "The elements of" << str << ":";
	for(it=deq.begin();it!=deq.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	deque<char> deque_A;//创建双端队列
	deque_A.push_back('c');//从队尾进队
	deque_A.push_back('d');
	deque_A.push_front('b');//从队头进队
	deque_A.push_front('a');
	print(deque_A,"deque_A");//显示队头元素
	cout << "The first element of deque_A is " << deque_A.front() << endl;//显示队尾元素
	cout << "The last element of deque_A is " <<deque_A.back() << endl;
	
	deque_A.insert(deque_A.begin(),'x');
	deque_A.insert(deque_A.end(),'z');
	print(deque_A,"deque_A");
	deque_A.pop_front();
	print(deque_A,"deque_A");
	deque_A.pop_back();
	print(deque_A,"deque_A");
	return 0; 
}