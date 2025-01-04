/*
	2. Write a program of Addition, Subtraction, Division, Multiplication using constructor
*/

#include <iostream>
using namespace std;

class Addition{
	
	public :
		
		Addition(int num1 , int num2)
		{
			cout<<"\n Addition = "<<num1+num2;
		}
};

class Subtraction{
	
	public :
		
		Subtraction(int num1, int num2)
		{
			cout<<"\n subtraction ="<<num1-num2;
		}
};

class Multiplication{
	
	public :
		
		Multiplication(int num1, int num2)
		{
			cout<<"\n Multiplication = "<<num1*num2;
		}
};

class Division{
	
	public :
		
		Division(int num1, int num2)
		{
			cout<<"\n Division ="<<num1/num2;
		}
};

int main()
{
	int num1,num2;
	
	cout<<"Enter the Value of num1 =";
	cin>>num1;
	
	cout<<"Enter the value of num2 =";
	cin>>num2;
	
	Addition a1(num1,num2);
	Subtraction s1(num1,num2);
	Multiplication m1(num1,num2);
	Division d1(num1,num2);
	
	return 0;
}


