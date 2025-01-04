/*
7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.
*/


#include<iostream>
using namespace std;
class Date 
{
	private:
		int day;
		string month;
		int year;
		
	public:
		int count=0;
		void set(int d,int m,int y)
		{
			if(y%4==0 && m==2 && (d>=1 && d<=29))
			{
				day = d;
				month = "February";
				year = y;
			}
			else if(m==2 && (d>=1 && d<=28))
			{
				day = d;
				month = "February";
				year = y;
			}
			else if((m==4 || m==6 || m==9 || m==11) && (d>=1 && d<=30))
			{
				day = d;
				switch(m)
				{
					case 4 :
						month = "April";
					break;
					case 6 :
						month = "JUNE";
					break;
					case 9 :
						month = "SEPTEMBER";
					break;
					case 11 :
						month = "NOVEMBER";
					break;				
					
					
				}
				year=y;
			}
			else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>=1 && d<=31))
			{
				day = d;
				switch(m)
				{
					case 1:
						month = "January";
					break;
					case 3:
						month = "MARCH";
					break;
					case 5:
						month = "MAY";
					break;
					case 7:
						month = "JULY";
					break;
					case 8:
						month = "AUGUST";
					break;
					case 10:
						month = "OCTOMBER";
					break;
					case 12:
						month = "DECEMBER";
					break;
				}
							
				
				year=y;
			}
			else
				{
					count++;
				}
		}
		
		void get()
			{
				if(count==0)
				{
					cout<<"\n"<<day<<" - "<<month<<" - "<<year<<endl;
				}
				else
				{
					cout<<"\nInvalid date format";
				}
			}
				
};

int main()
{
	Date d1,d2,d3;
	d1.set(12,7,2027);
	d2.set(29,2,2026);
	d3.set(31,3,2024);
	d1.get();
	d2.get();
	d3.get();
	
	return 0;
}
