/*
Q.2 Create a class Team as follows with following data members such as,
Accept 5 different records in array and display the records as follows:
Country  Player   Matches Age BattingAvg BallingAvg
India    Sachin    295    30   45.51     53.00
Australia  Ricky   160    28   41.00      67.00
India       Saurav 230 3  1    40.95      30.00
*/

#include<iostream>
using namespce std;
class  record
{
	char c_name[10], p_name[10];
	int macthes, age;
	double bat_avg, ball_avg;
	
	public:
		void getdata(){
			cout<<"Enter the country name \n";
			cin>>c_name;
			cout<<"\n Enter the player name :";
			cin>>p_name;
			cout<<"\n Enter the No of matches:";
			cin<<matches;
			cout<<"\n Enter age:";
			cin>>age;
			cout<<"\n Enter batting avearge and balling avearge";
			cin>>bat_avg>>ball_avg;
			
		}
		
		void showdata()
		{
		cout<<"\n country\t " 
		}
	
};
int main()
{
	
}
