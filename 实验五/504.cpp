#include <iostream>
#include <cmath>
const double PI=3.14;
using namespace std;
class Shape
{
	public:
	virtual double area()=0;
	virtual ~Shape(){
	};
};
class Circle:public Shape
{
	private:
		double r;
	public:
		Circle(double r)
		{
			this->r=r;
		}
		double area()
		{
			return PI*r*r;
		}
		~Circle(){
		};
};
class Square:public Shape
{
	private:
		int d;
	public:
		Square(int d)
		{
			this->d=d;
		}
		double area()
		{
			return d*d;
		}
		~Square(){
		};
};
class Rectangle:public Shape
{
	private:
		int a;
		int b;
	public:
		Rectangle(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		double area()
		{
			return a*b;
		}
	~Rectangle(){
		};	
};
class Trapezoid:public Shape
{
	private:
		double a,b,c;
	public:
		Trapezoid(double a,double b,double c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		double area()
		{
			return (a+b)*c/2;
		}
		~Trapezoid(){
		};
};
class Triangle:public Shape
{
	private:
		int a,b,c;
	public:
		Triangle(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		double area()//进行三角形面积计算时判定三角形是否成立
		{
			if(a+b>c&&a+c>b&&b+c>a)
			{
				double S;
				S=sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
				return S;
			}
			else
			{
				cout << "error"	 << endl;	
				return 0;
			}
		}
		~Triangle(){
		};
};
int main()
{
	Shape * A[5];
	A[0]=new Circle (10.2);//circle类对象进行初始化;
	A[1]=new Square (3);//square类对象进行初始化
	A[2]=new Rectangle (3,4);//rectangle类对象进行初始化
	A[3]=new Trapezoid (2.0,4.5,3);//trapezoid类对象进行初始化
	A[4]=new Triangle (4,5,6);//triangle类对象进行初始化
	for(int i=0;i<5;i++)
	{
		cout << A[i]->area() << endl;
		//delete A[i];如果在这里就释放了内存，后面面积求和无法返回结果
	}
	double sum=0;
	double s[5];
	for(int i=0;i<5;i++){
		s[i]=A[i]->area();
		sum=sum+s[i];
		delete A[i];
	}
	cout << sum << endl;
	return 0;
}