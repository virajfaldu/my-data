
// (1). Using friend function find the maximum number from given
// two numbers from two different classes. Write all necessary
// functions and constructors for the program

#include <iostream>
using namespace std;
class num_2;
class num_1
{
	int a;

public:
	num_1()
	{
		cout << "\nenter your num:";
		cin >> a;
	}
	friend void max(num_1, num_2);
};
class num_2
{
	int b;

public:
	num_2()
	{
		cout << "\nenter your num:";
		cin >> b;
	}
	friend void max(num_1, num_2);
};
void max(num_1 o1, num_2 o2)
{
	if (o1.a > o2.b)
	{
		cout << "\n"<< o1.a << " is a max value"<<"\n\n";
	}
	else
	{
		cout << "\n"<< o2.b << " is a max value"<<"\n\n";
	}
}
int main()
{
	num_1 o1;
	num_2 o2;
	max(o1, o2);
}