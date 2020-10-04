#include<iostream>
using namespace std;
#include<math.h>
#include<conio.h>
#include<string.h>
int choice;

class bank
{
protected:
char name[70];
int acnum;
char actype[25];
int balance;
public:
	void get();
	void deposit();
	void withdraw();
	void display();
	void balance1();
//constructor
};
void bank::get()
{
cout<<"Welcome To Secure Banking System:"<<endl;
cout<<"Don't worry your details are protected"<<endl;
cout<<"Enter your Details:"<<endl;
cout<<"\n Enter name of Depositor:"<<endl;
cin>>name;
cout<<"\n Enter your Account number:"<<endl;
cin>>acnum;
cout<<"\n Enter Account Type:"<<endl;
cin>>actype;
cout<<"\n Enter  Balance:"<<endl;
cin>>balance;
};
void bank::deposit()
{
float depos;
cout<<"\n Deposit:";
cout<<"\n Enter Amount to deposit:";
cin>>depos;
balance=balance+depos;
cout<<"current balance is:"<<balance;
};
void bank::withdraw()
{
float am;
cout<<"\n withdraw :";
cout<<"\n Enter amount to Withdraw:";
cin>>am;
balance=balance-am;
cout<<"current balance is:"<<balance;
};
void bank::balance1()
{
	cout<<"Balance is:"<<balance; 
};

class Saving:public bank

{
	public:
		virtual void print()
		{
			cout<<"Note that:"<<endl;
			cout<<"If Account type:is saving"<<endl;
			cout<<"It has high liquidity n provides about 4% interest annually"<<endl;
		}
};

class  Current:public bank
{
	public:
		virtual void print()
		{
			cout<<"Note that:"<<endl;
			cout<<"If Account type:is current"<<endl;
			cout<<"Their is no limit on number of transaction of day."<<endl;
		}
};
	

void bank::display()
{

cout<<"Account Details are as follows:";
cout<<"Name of Depositor:"<<name<<endl;
cout<<" Account Number:"<<acnum<<endl;
cout<<" Account Type:"<<actype<<endl;
cout<<"balance:"<<balance<<endl;
};
int main()
{ 

	
int k;

Saving x;
Current y;
x.print();
y.print();
bank c;
c.get();
jump:
cout<<"1. Deposit\n"<<endl;
cout<<"2. withdrawn"<<endl;
cout<<"3. Check balance"<<endl;
cout<<"4. Display details\n"<<endl;
cout<<"5. Exit\n"<<endl;
cout<<"Please enter your Choice: "<<endl;
int choice;
cin>>choice;
switch(choice)
{
	case 1:c.deposit();break;
	case 2:c.withdraw();break;
	case 3:c.balance1();break;
	case 4:c.display();break;
	case 5:cout<<"Thanks for banking"<<endl<<endl;
};

cout<<"Press 0 to continue"<<endl;
cin>>k;
if(k=0)
{
	goto jump;
};
}
         
                  
