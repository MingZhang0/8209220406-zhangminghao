#include <iostream>
using namespace std;
class Time
{
	private:
		int hour;
		int minute;
		int sec;
	public:
	    Time(int hour=0,int minute=0,int sec=0)
		{
			this->hour=hour;
			this->minute=minute;
			this->sec=sec;
		}
		void Showtime()
		{
			cout << hour << ":" << minute << ":" << sec << endl;
		}
};
int main()
{
	Time t1(10,24,00);
	t1.Showtime();
	return 0;
}