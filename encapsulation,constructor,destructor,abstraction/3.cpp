/*
	3. Write a C++ program to create a class called Car that has private
	member variables for company, model, and year. Implement member
	functions to get and set these variables.
*/

#include <iostream>
using namespace std;

class Car{
	
	private :
		
		string company;
		string model;
		int year;
		
	public :
		
		void setvalue(string c, string m, int y)
		{
			company = c;
			model = m;
			year = y;
		}
		
		void getvalue()
		{
			cout<<"\n Company Name ="<<company;
			cout<<"\n year ="<<year;
			cout<<"\n Model Name ="<<model;
		}
};

int main()
{
	string model, company;
	int year;
	
	cout<<"\n Enter the company name =";
	cin>>company;
	
	cout<<"\n Enter the year =";
	cin>>year;
	
	cout<<"\n Enter the model name =";
	cin>>model;
	
	Car c1;
	c1.setvalue(company,model,year);
	c1.getvalue();

	return 0;
}
