
// (3). Write a program to demonstrate the use of pure virtual function

#include<iostream>
using namespace std;
class person
{
	public:
	virtual void fun()=0;
};
class student:public person
{
	int a=8,b=9;
	public:
	void fun()
	{
		cout<<a+b;
	}
};
void main()
{
	person *p;
	student x;
	p=&x;
		
	p->fun();	
} 
