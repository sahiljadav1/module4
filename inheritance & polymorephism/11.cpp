/*
11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area *
breadth Triangle: ?
*Area* breadthCircle:
Pi * Area *Area
*/

#include<iostream>
using namespace std;
class Calculate
{
	public :
		void shape(string n,double r)
		{
			cout<<"\n Area of "<<n<<"="<<3.14*(r*r);
		}
		void shape(string n,int l,int b)
		{
			cout<<"\nArea of "<<n<<" = "<<l*b;
		}
		void shape(string n,double base,double height)
		{
			cout<<"\nArea of "<<n<<" = "<<0.5*(base*height);
		}
	
};
int main()
{
	Calculate c1;
	c1.shape("Circle",9);
	Calculate c2;
	c2.shape("Rectangle",5,9);
	Calculate c3;
	c3.shape("Triangle",6.5,3.5);

	return 0;
}
