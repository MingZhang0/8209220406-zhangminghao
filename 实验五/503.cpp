#include <iostream>
using namespace std;
class cuboid
{
	private:
		double height;
		double length;
		double width;
	public:
		cuboid(double height=0,double length=0,double width=0)
		{
			this->height=height;
			this->length=length;
			this->width=width;
		}
		void Setdata(){
		    cin >> height;
			cin >> length;
			cin >> width;
		}
		double calculateV(){
		    double V;
			V=height*length*width;
			cout << "V=" << V << endl;
			return 0;
		}
};
int main()
{
	cuboid A1;
	A1.Setdata();
	cuboid A2;
	A2.Setdata();
	cuboid A3;
	A3.Setdata();
	A1.calculateV();
	A2.calculateV();
	A3.calculateV();
	return 0;
}