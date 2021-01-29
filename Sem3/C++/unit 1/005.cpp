
// (5). Create a function power() to raise a number m to power n.
// the function takes a double value for m and int value for n,
// and returns the result correctly. Use the default value of 2
// for n to make the function calculate squares when this
// argument is omitted. Write a main that gets the values of m
// and n from the user to test the function

#include<iostream>
using namespace std;
double power(double m,int n)
{
	int i,square=1;
	for(i=0;i<n;i++)
	{
		square=square*m;
	}
	return square;
}
int main()
{
	double m;
	int n;
	cout<<"\n\nEnter a m: ";
	cin>>m;
	cout<<"\n\nEnter a n: ";
	cin>>n;
	cout<<"ans.: "<<power(m,n);
}

