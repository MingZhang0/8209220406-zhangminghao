#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	const char* cr="12345";
	std::string str("123456789");
	cout << "Initial str is:" << str << endl;
	std::string str1(cr,3);
	cout << "str is:" << str1 << endl;
	std::string str2(10,'5');
	cout << "str2 is:" << str2 << endl;
	cout << "str2's size:" << str2.size() << endl;//实际比输出结果大1，结束符
	cout << "str2's length:" << str2.length() << endl;
	//str2.append(cr,3);
	str2.append(str,3,3);
	cout << str2 << endl;
	str2.assign(str,3,3);
	cout << str2 << endl;
	cout << str2.compare(str) << endl;//compare()逐字符进行比较，一旦能比较出结果就不再进行比较
	str2.insert(3,str,3,3);
	string str3=str2.substr(3,3);
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str.find("456",0) << endl;//第一个参数必须是字符串
	str3.replace(0,3,str2);
	cout << str3 << endl;
	str3.swap(str2);
	cout << "After swap str2 and str3,str3:" << str3 << endl;
	str3+=str2;
	cout << str3 << endl;
	cout << (str3==str2) << endl;
	cout << str[3] << endl;
	string::iterator it;
	for(it=str3.begin();it!=str3.end();it++)
	{
		cout << *it << endl;
	}
	char *cr1=new char[10];
	strcpy(cr1,"1234567");
	str3.copy(cr1,5,1);//第一个参数不能是const 
	cout << str3 << endl;
	cr=str3.c_str();//会把结尾的\0一起传入
	cr=str3.data();//不会有\0一起传入，原则上不常用
	//NULLptr可以跨平台使用，可兼容性好，代替NULL
	//for(auto i:az)可以自适应的变动范围，但必须是容器vector和数组（从对象中获取），包含头文件#include<vector>
	auto a=3;
	auto b=3.0;
	std::vector<int>az;//如果不加头文件<vector>则会报错“vector is not a member of std"
	int bz[10];
	char * cr2=nullptr;
	for(int i=0;i<10;i++)
	{
		az.push_back(0);
	}
	for(int i=0;i<10;i++)
	{
		cout << az[i] << endl;
	}
	for(auto i:az){
		cout << i << endl;
	}
	for(auto i:bz){
		cout << i << endl;
	}
	return 0;
}