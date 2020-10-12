
// (4). Write a program to illustrate the use of insertion and
// extraction operators for Text mode Input/Output.

#include<iostream>
using namespace std;

template <class d>
void bubble(d *a,d *b)
{
	d tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;	
} 
void main()
{
 	int a=6,b=7;
 	float c=8.7,d=7.9;
 	bubble(&a,&b);
 	bubble(&c,&d);
 	cout<<a<<" "<<b<<"\n"<<c<<" "<<d;
}