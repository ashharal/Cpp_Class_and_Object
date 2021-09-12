/*Write a program to implement a telephone bill class with Name, Address,
Tel. No., No. of calls as data members. Compute the amount to be paid if the
charges per call is Rs. 2/-.*/

#include<iostream>
using namespace std;
class tele_bill
{
	char name[10];
	char address[100];
	int tele_no;
	int count, amount;
	
	public:
		void getdata()
		{
			cout<<"\n Enter Your Name:";
			cin>>name;
			cout<<"\n Enter the Address: ";
			cin>>address;
			cout<<"\n Enter telephone number";
			cin>>tele_no;
			cout<<"\n Enter the no of calls: ";
			cin>>count;
			
			amount =count*2;
			cout<<"total amount :"<<amount;
			
		}
		
		void showdata()
		{
		cout<<"Name :"<<name<<endl;
		cout<<" Address :"<<address<<endl;
		cout<<"Telephone Number:"<<tele_no<<endl;
		cout<<"No of calls :"<<count<<endl;
		cout<<"amount to be paid : "<<amount<<endl;
			
		}
	
	
};
int main()
{
	tele_bill T;
	T.getdata();
	T.showdata();
	return 0;
}
