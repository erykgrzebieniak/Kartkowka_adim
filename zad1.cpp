#include <iostream>

using namespace std;

class Triangle
{
	public:
		int bok_a;
		int bok_b;
		int bok_c;
		int h;
		int obliczPole();
		int obliczObwod();
};
int Triangle::obliczPole()
{
	cout<<"pole to: "<<bok_a*h/2;
}
int Triangle::obliczObwod()
{
	cout<<"\nobwod to: "<<bok_a+bok_b+bok_c;
}


int main()
{
	Triangle trojkat;
	trojkat.bok_a = 3;
	trojkat.bok_b = 4;
	trojkat.bok_c = 5;
	trojkat.h = 10;
	
	trojkat.obliczPole();
	
	trojkat.obliczObwod();
	
	
	return 0;
}
