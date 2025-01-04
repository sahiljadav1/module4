//2. Write a C++ Program to find Area of Rectangle using inheritance


#include<iostream>
using namespace std;
class shape 
{
	protected :
		double length;
		double width;
    public :
		void setvalue(double l,double w)
		{
			length = l;
			width = w;
		}
		void getvalue()
		{
			cout<<"\n Length = "<<length;
			cout<<"\n Width = "<<width;
		}
};
class Rectangle : public shape
{
	private :
		double area;
	public :
	   void calculatearea()
	   {
	   		shape :: getvalue();
	   	    area=length*width;
	   }	
	   void displayarea()
	   {
	   	    cout<<"\n Area of ranctangle is = "<<area;
	   }
};
int main()
{
	Rectangle r1;
	r1.setvalue(4,6);
	r1.calculatearea();
	r1.displayarea();
}
