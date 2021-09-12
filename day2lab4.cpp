/*Write a Program to implement a sphere class with appropriate members
and
member function to find the surface area and the volume.
(Surface = 4 p r2 and Volume = 4/ 3 p r3)*/
#include<iostream>
using namespace std;
class Sphere
{
	double sa,sv,r,rr,rrr;
	public:
	void getData()
	{
		cout<<"\n enter the value of radious ";
		cin>>r;
		rr=(r*r);
		sa=4*3.14*rr;
		rrr=rr*r;
		sv=4/3*3.14*rrr;
			
	}	
	void Showdata()
	{
		cout<<"\n suraface area="<<sa;
		cout<<"\n surface volume"<<sv;
	}
};
int main()
{
	Sphere s;
	s.getData();
	s.Showdata();
	return 0;
}
