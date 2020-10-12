
// (3). Define currency class which contains rupees and paisa as data
// members. Write a friend function named AddCurrency ( )
// which add 2 different Currency objects and returns a Currency
// object. Write parameterized constructor to initialize the values
// and use appropriate functions to get the details from the user
// and display it.

#include <iostream>
using namespace std;
class num_2;
class num_1
{
	int rs, ps;

public:
	num_1(int a, int b)
	{
		rs = a;
		ps = b;
	}
	num_1()
	{
	}
	void total()
	{
		cout << "\nthis is your total " << rs << "." << ps << "\n\n";
	}
	friend num_1 add(num_1, num_2);
};
class num_2
{
	int rs, ps;

public:
	num_2(int a, int b)
	{
		rs = a;
		ps = b;
	}

	friend num_1 add(num_1, num_2);
};

num_1 add(num_1 o1, num_2 o2)
{
	num_1 o3;

	o3.rs = o1.rs + o2.rs;

	o3.ps = o1.ps + o2.ps;
	while (o3.ps > 100)
	{
		o3.rs = o3.rs + 1;
		o3.ps = o3.ps - 100;
	}
	return o3;
}

int main()
{
	int a, b, c, d;
	cout << "\nenter your rs and ps for 1st:";
	cin >> a >> b;
	cout << "\nenter your rs and ps for 2st:";
	cin >> c >> d;
	num_1 o1(a, b);
	num_2 o2(c, d);
	num_1 o3;
	o3 = add(o1, o2);
	o3.total();
}