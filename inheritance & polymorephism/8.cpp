/*
8.Write a program to Mathematic operation like Addition, 
Subtraction, Multiplication, Division Of two number using different
parameters and Function Overloading
*/
 
#include<iostream>
using namespace std;
class cal
{
 	public:
 		
 		 void calculator (int num1,int num2)
 		{
 			cout<<"\nThe Addition of numbers are : "<<num1+num2;
		}
		void calculator(double num1,int  num2)
 		{
 			cout<<"\nThe Subtraction of numbers are : "<<num1-num2;
		}
		void calculator(float num1,float num2)
		{
			cout<<"\nThe multiplication of numbers are :"<<num1*num2;
		}
		void calculator(double num1, double num2)
		{
			cout<<"\nThe division of numbers are :"<<num1/num2;
		}
		
 };
 
 int main()
 {
	cal c1;
	c1.calculator(4,5);
	cal c2;
	c2.calculator(11.10,8);
	cal c3;
	c3.calculator(24.5,22.5);
	cal c4;
	c4.calculator(8.5,6.6);
 	
 	return 0;
 }
