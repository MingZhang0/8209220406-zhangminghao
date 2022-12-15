#include <iostream>
#include "mytriangle.h"
using namespace std;
//class Point {
//	private:
//		int X,Y;
//	public:
//		Point(int X=0,int Y=0){
//			this->X=X;
//			this->Y=Y;
//		cout << "Point::Point()used." << endl;	
//		}
//		virtual double area(){
//			return 0.0;
//		}
//		virtual ~Point(){
//			cout << "Point::~Point()used." << endl;
//		}
//};
class format{
	protected:
		int X,Y;
	public:
		virtual double area()=0;
		virtual void show()=0;
};
class Point:public format{
	public:
		Point(int X=0,int Y=0){
			this->X=X;
			this->Y=Y;
			cout << "Point::Point()used" << endl;
		}
		virtual double area(){
			return 0.0;
		}
		virtual ~Point(){
			cout << "Point::~Point()used"<< endl;
		}
		void show(){
			cout << X << "," << Y << endl;
		}
};
class Circle:public Point{
	protected:
		int r;
	public:
		Circle(int X,int Y,int r=0):Point(X,Y){
			this->r=r;
			cout << "Circle::Circle()used." << endl;
		}
        virtual double area(){
			return 3.14*r*r;
		}
		void show(){
			cout << X << "," << Y << "," << r << endl;
		}
        ~Circle(){
	    cout << "Circle::~Circle()used." << endl;
        }
};
class Cylinder:public Circle{
	private:
		double height;
	public:
		Cylinder(int X,int Y,double r,double h):Circle(X,Y,r){
			height=h;
			cout << "Cylinder::Cylinder()used." << endl;
		}
		double area(){
			return 2*Circle::area()+2*3.14*r*height;
		}
		void show(){
			Circle::show();
			cout << height << endl;
		}		
};
//class Circle:public Point{
//	private:
//		int r;
//	public:
//		Circle(int X,int Y,int r=0):Point(X,Y){
//			this->r=r;
//			cout << "Circle::Circle()used." << endl;
//		}
//         double area(){
//			return 3.14*r*r;
//		}
//~Circle(){
//	cout << "Circle::~Circle()used." << endl;
//}
//};
int main()
{
//	Point P1(10,10);
//	cout << "P1.area="<< P1.area() << endl;
//	Circle C1(10,10,20);
//	cout << "C1.area="<< C1.area() << endl;
//	Point * Pp;
//	Pp=&C1;
//	Point * Rp;
//	Rp=&C1;
//	cout << "Pp->area=" << Pp->area() << endl;
//	cout << "Rp->area=" << Rp->area() << endl;
	Point * circle=new Circle(10,10,25);
	delete circle;
	Cylinder CY(100,200,10,50);
	format * p;
	p=&CY;
	p->show();
	cout << "Total area:" << p->area()  << endl;
	Circle cir(5,10,100);
	format& cir2=cir;
	cir2.show();
	return 0;
	
}