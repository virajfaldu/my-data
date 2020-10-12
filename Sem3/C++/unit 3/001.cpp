
// (1). Create a class vehicle which stores the vehicleno and
// chassisno as a member. Define another class for scooter,
// which inherits the data members of the class vehicle and has a
// data member for a storing wheels and company. Define
// another class for which inherits the data member of the class
// vehicle and has a data member for storing price and company.
// Display the data from derived class. Use virtual function.

#include<iostream>
using namespace std;
class vehicle
{
	public:
	int vehno;
	int chassi;
	
	virtual void getd()
	{
		cout<<"\nenter your vehicle no: ";
		cin>>vehno;
		cout<<"\nenter your chassis no: ";
		cin>>chassi;
	}
};
class scooter:public vehicle
{
	public:
	int wheel;
	char com[20];
	
	void getd()
	{
		cout<<"\nenter your vehico no: ";
		cin>>vehno;
		cout<<"\nenter your chassi no: ";
		cin>>chassi;
		cout<<"\nenter your wheel no: ";
		cin>>wheel;
		cout<<"\nenter your company: ";
		cin>>com;
	}
};
class another:public vehicle
{
	public:
	int price;
	char com[20];
	
	void getd()
	{
		cout<<"\nenter your vehicle no: ";
		cin>>vehno;
		cout<<"\nenter your chassi no: ";
		cin>>chassi;
		cout<<"\nenter your price: ";
		cin>>price;
		cout<<"\nenter your com: ";
		cin>>com;
	}
};
int main()
{
	vehicle *p;
	another o1;
	p=&o1;
	p->getd();	
}


