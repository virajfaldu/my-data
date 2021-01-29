
// (10). Write a program to call member functions of class in the main
// function using pointer to object and pointer to member
// function.

#include<iostream>
using namespace std;
class a
{
	
	int a=4,b=8;
	public:
	int c;
	void add()
	{
		c=a+b;
	}
};
int main()
{
	a o1;
	a *o2=&o1;
	o2->add();
	cout<<"\nthis is a poiner: "<<o2->c<<"\nthis is veriable:"<<o1.c<<"\n\n";
}