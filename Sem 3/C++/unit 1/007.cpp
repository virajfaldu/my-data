
// (7). Write a C++ program to swap the value of private data members from 2 different classes.

#include<iostream>
using namespace std;
class b;
class a
{
	int x=5;
	friend void swap(a,b);
};
class b
{
	int y=6;
	friend void swap(a,b);
};
void swap(a o1,b o2)
{
	int tmp;
	tmp=o1.x;
	o1.x=o2.y;
	o2.y=tmp;
	
	cout<<"x= "<<o1.x<<" \ny= "<<o2.y<<"\n";
}
int main()
{
	a o1;
	b o2;
	swap(o1,o2);
}