#include <iostream>
#include <string>
#include <vector>
using namespace std;
template <class T>
//找两个vector容器中的交集，每个容器中有五个字符串
vector <T> intersection(vector<T>& v1,vector<T>& v2,vector<T> v3){
	class vector<T>::iterator it;
	class vector<T>::iterator it1;
	for(it=v1.begin();it!=v1.end();it++){
		for(it1=v2.begin();it1!=v2.end();it1++){
			if(*it==*it1){
				v3.push_back(*it1);//如果v2中元素与v1一致就放入v3容器中
			};
		};
		};
	for(int j=0;j<v3.size();j++){
			cout << v3[j] << "\t";
		}
		return v3;
	}
int main()
{
	vector <string> v1,v2,v3;
	string str1[5];
	string str2[5];
	for(int i=0;i<5;i++){
		cin >> str1[i];
		
	}
	for(int j=0;j<5;j++){
		cin >> str2[j];
	}//注意string的输入方式：如果写成for(int i=0;i<5;i++){
	 //                               cin >>  str1[i];
	 //                               cin >>  str2[i];}则是交替将输入的数据分别存入两个数组中；
	for(int j=0;j<5;j++){
		v1.push_back(str1[j]);
		v2.push_back(str2[j]);
	}
	intersection(v1,v2,v3);
	return 0;
}
//	for(int i=0;i<v3.size();i++){
//		cout << v3[i] << "\t";
//	}
//    for(int i=0;i<v1.size();i++){
//    	for(int j=0;j<v2.size();j++){
//    		if(v1[i]==v2[j]){
//    			v3.push_back(v2[j]);
//			};
//		};
//	};
//		for(int j=0;j<v3.size();j++){
//			cout << v3[j] << "\t";
//		}
//		return v3;
		
//    set <T> s;
//    
//    for(int i=0;i<v1.size();i++){
//    	s.insert(v1[i]);
//	}
//	for(int j=0;j<v2.size();j++){
//		if(s.find(v2[j])!=s.end()){
//			v3.push_back(v2[j]);
//		}
//	}
//	return v3;