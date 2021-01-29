
// Write a program to demonstrate the use of default arguments in function overloading.

#include<iostream>	
using namespace std;

void s(int a,int b=0,int c=0)
{
	int ans=a+b+c;
	cout<<"\nThis is your ans:"<<ans;
}
int main()
{
	int a=4,b=7,c=5;
	s(a);
	s(a,b);
	s(a,b,c);
}