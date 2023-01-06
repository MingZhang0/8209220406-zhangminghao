#include <iostream>
#include "student.h"
using namespace std;
void Student::display()
{
	cout << "num:"<<num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
int main()
{
	Student stud;//为初始化，默认使用构造函数
	Student stud1(007,"tcg",'m');//给定数据初始化
	stud.display();
	stud1.display();
	return 0;
}