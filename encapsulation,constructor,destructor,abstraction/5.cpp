/*
	5. Write a C++ program to create a class called Triangle that has private
	member variables for the lengths of its three sides. Implement member
	functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include <iostream>
using namespace std;

class Triangle{
	
	private:
		
		double side1 , side2 , side3;
		
	public:
		
		setvalue(double s1,double s2, double s3)
		{
			side1 = s1;
			side2 = s2;
			side3 = s3;
		}
		
		void display()
		{
			if(side1 == side2 && side1 == side3 && side2 == side3)
			{
				cout<<"\n Equilateral Triangle.";
			}
			else if(side1 == side2 || side1 == side3 || side2 == side3)
			{
				cout<<"\n Isosceles Triangle.";
			}
			else
			{
				cout<<"\n Scalene Triangle.";
			}
		}
};

int main()
{
	double side1, side2, side3;
	
	cout<<"\n Enter the value of side1 =";
	cin>>side1;
	
	cout<<"\n Enter the value of side2 =";
	cin>>side2;
	
	cout<<"\n Enter the value of side3 =";
	cin>>side3;
	
	Triangle t1;
	t1.setvalue(side1,side2,side3);
	t1.display();
	
	return 0;
}
