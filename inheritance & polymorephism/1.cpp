/*
1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/


#include<iostream>
using namespace std;
class Cricketer
{
	protected:
		string name;
		int match;
		public:
			void input_data(string n,int m)
			{
				name=n;
				match=m;
			}
			void display()
			{
				cout<<"\n Name:"<<name;
				cout<<"\n Match:"<<match;
			}
		
			
};
class batsman:public Cricketer
{
	private:
        int total_run;
		float average;
		string performance;
	public:
		void setdata()
		{
			cout<<"\n Enter The Total Run:";
			cin>>total_run;
			cout<<"\n performance=";
			cin>>performance;
		}
		void calculateaverage()
		{
			Cricketer::display();
			average=(float)total_run/(float)match;
		}
		void displaydata()
		{
			cout<<"\n Totalrun:"<<total_run;
			cout<<"\n Average:"<<average;
			cout<<"\n Performance:"<<performance;
		}
};
int main()
{

	batsman b1;
	b1.input_data("kohli",5);
	b1.setdata();
	b1.calculateaverage();
	b1.displaydata();
	return 0;
}
