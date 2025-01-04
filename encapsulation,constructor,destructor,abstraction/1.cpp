/*
	1. Write a program to find the multiplication values and the cubic values using
	inline function.
*/

#include <iostream>
using namespace std;

inline mul(int num1 ,int num2)
{
	return num1*num2;
}

inline cube(int num1)
{
	return num1*num1*num1;
}

int main()
{
	int num1 , num2;
	
	cout<<"\nEnter the value of Number 1 =";
	cin>>num1;
	
	cout<<"\nEnter the value of Number 2 =";
	cin>>num2;
	
	cout<<"\n Multiplication of "<<num1<<" and "<<num2<<" is ="<<mul(num1,num2);
	
	cout<<"\n Answer of cubic value ="<<cube(num1);
	return 0;
}
