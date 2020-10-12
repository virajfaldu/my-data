
// (3). Create a template for the bubble sort function.

#include<iostream>
using namespace std;

template <class n>
void bubble(n *a,n *b)
{
	n tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;	
} 
int main()
{
 	int a=6,b=7;
 	float c=8.7,d=7.9;
 	bubble(&a,&b);
 	bubble(&c,&d);
 	cout<<a<<" "<<b<<"\n"<<c<<" "<<d;
}