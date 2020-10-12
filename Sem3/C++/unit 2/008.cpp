
// (8). Write a program with use of inheritance: Define a class
// publisher that stores the name of the title. Derive two classes
// book and tape, which inherit publisher. Book class contains
// member data called page no and tape class contain time for
// playing. Define functions in the appropriate classes to get and
// print the details.

#include <iostream>
using namespace std;
class publicer
{
	
	char name[15];
	public:
	void gettitle()	
	{
		cout<<"\nenter title of book: ";
		cin>>name;
	}
	void wd()
	{
		cout<<"\n"<<name;
	}
	void gett()
	{
		cout<<"\nenter name tap: ";
		cin>>name;
	}
};

class book:public publicer
{

	int page_no;
	public:
	void getd()
	{
		gettitle();
		cout<<"enter your book pages: ";
		cin>>page_no;
	}
	void output()
	{
		wd();
		cout<<"  "<<page_no;
	}
};
class tap:public publicer
{
	int time;
	public:
	void getd()
	{
		gett();
		cout<<"enter tap's time: ";
		cin>>time;
	}
	void output()
	{
		wd();
		cout<<"  "<<time<<"\n\n";	
	}
};

int main()
{
	book o1;
	tap o2;
	
	o1.getd();
	o2.getd();
	
	o1.output();
	o2.output();
}
