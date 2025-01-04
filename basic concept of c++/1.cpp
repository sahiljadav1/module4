//1. WAP to create simple calculator using class

#include <iostream>
using namespace std;

class Calculator 
{
	public:
    
    float add(float a, float b) 
	{
        return a + b;
    }

    
    float subtract(float a, float b) 
	{
        return a - b;
    }

    
    float multiply(float a, float b) 
	{
        return a * b;
    }

    
    float divide(float a, float b) 
	{
        if (b != 0) 
		{
            return a / b;
        } 
		else 
		{
            cout << "error! division by zero." << endl;
            return 0;
        }
    }
};


int main() 
{
    Calculator c1; 
    int choice;
    float num1, num2;


    cout << "select operation:" << endl;
    cout << "1. addition" << endl;
    cout << "2. subtraction" << endl;
    cout << "3. multiplication" << endl;
    cout << "4. divide" << endl;


    cout << "enter choice (1/2/3/4): ";
    cin >> choice;


    cout << "enter first number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;


    switch(choice) 
	{
        case 1:
            cout << "result of addition: " << c1.add(num1, num2) << endl;
        break;
        case 2:
            cout << "result of subtraction: " << c1.subtract(num1, num2) << endl;
        break;
        case 3:
            cout << "result of multiplication: " << c1.multiply(num1, num2) << endl;
        break;
        case 4:
            cout << "result of division: " << c1.divide(num1, num2) << endl;
        break;
        default:
            cout << "invalid choice!" << endl;
    }

    return 0;
}

