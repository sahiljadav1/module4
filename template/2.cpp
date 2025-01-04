//2. Write a program of to sort the array using templates

#include<iostream>
using namespace std;

template<typename T,int size>


void sort(T (&arr)[size])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int i;
	int a[5] = {10,8,6,4,2};
	char b[5] = {'K','J','E','B','A'};
	float c[5] = {48.5,98.6,90.4,9.5,7.8};
	
	sort(a);
	sort(b);
	sort(c);
	
	cout<<"\nArray after sorting := ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nArray after sorting := ";
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"\nArray after sorting := ";
	for(i=0;i<5;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
