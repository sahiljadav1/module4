//4.Write a C++ Program display Student Mark sheet using Multiple inheritance


#include<iostream>
using namespace std;
class Student 
{
     protected:
	         string name;
			 int roll;
	 public:
	       void setvalue()	
	       {
	       	  cout<<"\n Enter The Name:";
	       	  cin>>name;
	       	  cout<<"\n Enter The Roll Number:";
	       	  cin>>roll;
		   }
		   void getvalue()
		   {
		   	 cout<<"\n Name:"<<name;
		   	 cout<<"\n Roll Number:"<<roll;
		   }
};
class Marks
{
	protected:
		int sci,eng,math,total;
		float percentage;
    public:
    	void setdata()
    	{
    		cout<<"\n Enter The Science Marks:";
    		cin>>sci;
    		cout<<"\n Enter The English Marks:";
    		cin>>eng;
    		cout<<"\n Enter The Maths Marks:";
    		cin>>math;
		}
		void getdata()
		{
			cout<<"\n science Marks:"<<sci;
			cout<<"\n English Marks:"<<eng;
			cout<<"\n Maths Marks:"<<math;
		}
		void total_marks()
		{
			total=sci+eng+math;
			cout<<"\n Total Marks:"<<total;
		}
		void calculatepercentage()
		{
			percentage=(float)total / 3;
			cout<<"\n Percentage ="<<percentage;
		}
		
};
class Marksheet:public Student,public Marks
{
	public:
		void display()
		{
			cout<<"\n Marks_Sheet:";
		    getvalue();
		    getdata();
		    total_marks();
		    calculatepercentage();
		}
};
int main()
{
	Marksheet m1;
	m1.setvalue();
	m1.setdata();
	m1.display();
	
	return 0;
}
