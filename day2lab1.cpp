/*Q.1 Create the following classes and write their appropriate class members and
display proper information to user.
a) Time b) Date c) Person d) Student
e) Fan f) Point
g)Box
*/
#include<iostream>
using namespace std;
class Box
{
	
	int num;
	char color[10];
	public:
	void Getinfo()
	{
		cout<<"\n enter number and color";
		cin>>num>>color;
	}
	void Showdata()
	{
		cout<<"number:"<<num<<"\ncolour:"<<color;
		cout<<"\n------------------------------->";
	}
		
};
class Point
{
	
	int x,y;
	public:
	void Getinfo()
	{
		cout<<"\n enter x and y";
		cin>>x>>y;
	}
	void Showdata()
	{
		cout<<"x:"<<x<<"y:"<<y;
		cout<<"\n------------------------------->";
	}
		
};
class Fan
{
	
	char name[20];
	double size;
	public:
	void Getinfo()
	{
		cout<<"\n enter name of company and size";
		cin>>name>>size;
	}
	void Showdata()
	{
		cout<<"name:"<<name<<"\nsize:"<<size;
		cout<<"\n------------------------------->";
	}
		
};
class Student
{
	int roll_num;
	char name[20];
	double fees;
	public:
	void Getinfo()
	{
		cout<<"\n roll number,name,fees";
		cin>>roll_num>>name>>fees;
	}
	void Showdata()
	{
		cout<<"roll_num:"<<roll_num<<"\nname:"<<name<<"\nfees:"<<fees;
		cout<<"\n------------------------------->";
	}
		
};
class Person
{
	int age;
	char name[20],city[20];
	public:
	void Getinfo()
	{
		cout<<"\n age,name,city";
		cin>>age>>name>>city;
	}
	void Showdata()
	{
		cout<<"age:"<<age<<"\nname:"<<name<<"\ncity:"<<city;
		cout<<"\n------------------------------->";
	}
		
};
class Time
{
	int sec,min,hrs;
	public:
	void Getinfo()
	{
		cout<<"\n enter the hrs,min,sec";
		cin>>hrs>>min>>sec;
	}
	void Showdata()
	{
		cout<<"hrs:min:sec"<<hrs<<min<<sec;
		cout<<"\n------------------------------->";
	}
};
class Date
{
	int date,month,year;
	public:
	void Getinfo()
	{
		cout<<"\n date,month,year";
		cin>>date>>month>>year;
	}
	void Showdata()
	{
		cout<<"date:month:year"<<date<<month<<year;
		cout<<"\n------------------------------->";
	}
		
};
int main()
{
	Time t1;
	t1.Getinfo();
	t1.Showdata();
	Date d1;
	d1.Getinfo();
	d1.Showdata();
	Person p1;
	p1.Getinfo();
	p1.Showdata();
	Student s1;
	s1.Getinfo();
	s1.Showdata();
	Fan f1;
	f1.Getinfo();
	f1.Showdata();
	Point p2;
	p2.Getinfo();
	p2.Showdata();
	Box b1;
	b1.Getinfo();
	b1.Showdata();
	

	
	return 0;
}
