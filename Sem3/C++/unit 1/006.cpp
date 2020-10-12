
// (6). Write a basic program which shows the use of scope resolution operator

#include<iostream>
using namespace std;
int a=6;
int main()
{
	int a=3;
	cout<<"\nthis is a local="<<a;
	cout<<"\nthis is a globel="<<::a<<"\n\n";
}
