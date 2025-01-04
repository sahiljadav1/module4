/*
	6. Write a C++ program to implement a class called Employee that has
	private member variables for name, employee ID, and salary. Include
	member functions to calculate and set salary based on employee
	performance. Using of constructor
*/

#include <iostream>
using namespace std;

class Employee{
	
	private :
		
		string name ;
		double employee_id;
		double salary;
		
	public :
		
		Employee(string n, double emp_id, double sal)
		{
			name = n;
			employee_id = emp_id;
			salary = sal;
		}
		
		void setsalary(char grade)
		{
			if(grade == 'A'|| grade == 'a')
			{
				salary = salary + (salary * 0.15);
				cout<<"\n Salary after increment ="<<salary;	  
			}
			else if(grade == 'B'||grade == 'b')
			{
				salary = salary + (salary * 0.10);
				cout<<"\n Salary after increment ="<<salary;
			}
			else if(grade == 'C'||grade == 'c')
			{
				salary = salary + (salary * 0.05);
				cout<<"\n Salary after increment ="<<salary;
			}
			else
			{
				cout<<"\n Salary ="<<salary;
			}
		}
		
		void display()
		{
			cout<<"\n Employee name ="<<name;
			cout<<"\n Employee id ="<<employee_id;
			cout<<"\n Salary = "<<salary;
		}
};

int main()
{
	string name;
	double salary,employee_id;
	char grade;
	
	cout<<"Enter Employee name =";
	cin>>name;
	
	cout<<"Enter Employee id =";
	cin>>employee_id;
	
	cout<<"Enter your salary =";
	cin>>salary;
	
	cout << "Enter performance rating (A, B, C, D): ";
	cin>>grade;
	
	Employee e1(name,employee_id,salary);
	e1.display();
	e1.setsalary(grade);
	
	return 0;
}

