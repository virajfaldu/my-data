
// (9). Create one class called Rupees, which has one member data to
// store amount in rupee and create another class called Paise
// which has member data to store amount in paise. Write a
// program to convert one amount to another amount with use of
// type conversion.

#include<iostream>
using namespace std;
class paisa;
class rupees 
{
	float rs;
	friend void con(rupees,paisa);
	public:
	void getval()
	{
		cout<<"enter your rupees";
		cin>>rs;	
	}
	
};
class paisa
{
	float ps;
	public:
	friend void con(rupees,paisa);
	void val()
	{
		cout<<"enter your paisa";
		cin>>ps;	
	}
};
void con(rupees o1,paisa o2)
{
	float a;
	a=o2.ps;
	o2.ps=o1.rs*100;
	cout<<"\nthis is your rs coonvert to ps "<<o2.ps;
	o1.rs=a/100;
	cout<<"\nthis is your ps convert to rs "<<o1.rs;	
}
int main()
{
	rupees rs1;
	paisa ps1;
	rs1.getval();
	ps1.val();
	con(rs1,ps1);
	
}