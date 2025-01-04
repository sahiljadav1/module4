//2. Define a class to represent a bank account. Include the following members:

#include<iostream>
using namespace std;
class BankAccount
{
	private:
		long int bankacc;
		long balance;
	
	public:
			long int acc;
			long int bal;
			
			void set()                                                                                                  
			{
				cout<<"\nEnter your account number = ";
				cin>>acc;
				bankacc = acc;
				}
};
int main()
{
	BankAccount b1;
	b1.set();
	long int deposite ;
	long int withdraw ;
	int choice;
	
	cout<<"\nEnter 1. for deposite = ";
	cout<<"\nEnter 2. for Withdraw = ";
	cout<<"\nEnter your choice = ";
	cin>>choice;
	switch (choice)
	{
		case 1:
			{
				int amount,balance;
				balance= 100000;
				cout<<"\nThis is your balance = 100000.";
				cout<<"\nEnter your amount = ";
				cin>>amount;
				if(amount > 0)
				{
				balance =balance+amount;
				cout<<"\nThis is your current balance = "<<balance;
				}
			}
		break;
		case 2:
			{
			 int amount,balance;
			 balance=100000;
			 cout<<"\nThis is your balance = 100000.";
			 cout<<"\nEnter your amount for withdraw = ";
			 cin>>amount;
			 if(amount>0 && amount<=balance)
			 {
			 	balance = balance - amount;                  
			 	cout<<"\nThis is your balance = "<<balance;
			 }	
			}
			break;
			default:
			{
				cout<<"\nThis is not possible.";
			}
	}
}
