/*Q.3 An electricity board charges the following rates to domestic users to
discourage large consumption of energy:
For the first 30 units - 1.50/- per unit
For next 200 units - 3.00/- per unit
Beyond 300 units - 4.25/- per unit
Create a class ElectricityBill for atleast 5 users with following opeartions….
Write a program to read the name of the user and number of units consumed
and print out the charges with names.
If the total amount is more than Rs. 500.00 then an additional surcharge of 15%
is added. */

#include<iostream>
using namespace std;
class E_bill
{
	char name[10];
	int N;
	double amount ,bill;
	
	public:
		void getdata()
		{
			cout<<"Enter the name of user:";
			cin>>name;
			
			cout<<"enter the number of units :";
			cin>>N;
			
			if(N<30)
			{
				amount = N*1.5;
			}
			
			else if (N<200 && N>30 )
			{
				amount =N*3;
			}
			
			else if(N>300)
			{
				amount = N*4.25;
			}
			
			if (amount >500)
			{
				bill =  amount*1.15;
			}
			else
			{
				bill = amount*1;
			}
		}
		
		void showdata()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"No of units :"<<N<<endl;
			cout<<" payable Amount "<<bill<<endl;
		}
	
};

int main()
{
	E_bill E[5];
	for (int i=0;i<5 ;i++)
	{
		E[i].getdata();
	}
	for (int i=0;i<5;i++)
	{
		E[i].showdata();
	}
	return 0;
}


