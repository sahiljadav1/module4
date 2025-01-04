/* 7.Write a C++ Program to illustrates the use of Constructors in multilevel inheritance*/

#include<iostream>
using namespace std;

class parent{
	public:
		parent()
		{
		cout<<"hello, this is parent."<<endl;
		}
};
class brother : public parent
	{
	public:
		Brother()
		{
			cout<<"Hello, this is brother."<<endl;	
		}
	
};
class sister : public brother
{
	public:
		sister()
		{
			cout<<"hello, this is sister."<<endl;
		}
	
};

int main()
{
	sister s1;
	return 0;
}
