/*
8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation
*/

#include<iostream>
using namespace std;
class Student
{
	private :
		int roll_no,sub1,sub2,std;
		string name;
	public :
		Student(int roll,string name,int sub1,int sub2,int std)
		{
			this->roll_no = roll_no;
			this->name = name;
			this->sub1 = sub1;
			this->sub2 = sub2;
			this->std=std;
		}
		string getname()
		{
			return name;
		}
		int getstd()
		{
			return std;
		}
		void grade()
		{
			if(sub1+sub2>150)
			{
				cout<<"A";
			}
			else
			{
				cout<<"B";
			}
		}
};
class Address
{
	private :
		string city;
		Student *ref;
	public :
		Address(string city,Student *ref)
		{
			this->city = city;
			this->ref = ref;
		}
		void display()
		{
			cout<<"\nStudent name = "<<ref->getname();
			cout<<"\n Class Name="<<ref->getstd();
			cout<<"\nGrade = ";
			ref->grade();
			cout<<"\nCity = "<<city;
		}
};
int main()
{
	Student s1(101,"sahil",89,90,10);
	Address a1("Ahmedabad",&s1);
	
	Student s2(102,"rushabh",77,62,12);
	Address a2("rajkot",&s2);
	
	a1.display();
	a2.display();
	return 0;
}




