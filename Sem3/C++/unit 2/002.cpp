
// (2). Using a friend function, find the average of three numbers
// from three different classes. Write all necessary member
// functions and constructor for the classes.

#include <iostream>
using namespace std;
class num_2;
class num_3;
class num_1
{
	int a;

public:
	num_1()
	{
		cout << "\nenter your num1: ";
		cin >> a;
	}
	friend void max(num_1, num_2, num_3);
};
class num_2
{
	int b;

public:
	num_2()
	{
		cout << "\nenter your num2: ";
		cin >> b;
	}
	friend void max(num_1, num_2, num_3);
};
class num_3
{
	int c;

public:
	num_3()
	{
		cout << "\nenter your num3: ";
		cin >> c;
	}
	friend void max(num_1, num_2, num_3);
};

void max(num_1 o1, num_2 o2, num_3 o3)
{
	float avg;
	avg = (o1.a + o2.b + o3.c) / 3;
	cout << "\nthis is your avg " << avg<<"\n\n";
}
int main()
{
	num_1 o1;
	num_2 o2;
	num_3 o3;
	max(o1, o2, o3);
}