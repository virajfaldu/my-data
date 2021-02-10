
// (5). Create a class named ‘String’ with one data member of type
// char *, which stores a string. Include default, parameterized
// and copy constructor to initialize the data member. Write a
// program to test this class.

#include <iostream>
#include <string.h>
using namespace std;

class string1
{
	char str[10];

public:
	string1()
	{
		cout << "\n\n Enter your string: ";
		cin >> str;
	}

	string1(string1 &o1)
	{
		strcpy(str, o1.str);
	}

	void display()
	{
		cout << "\noutput= " << str << "\n";
	}
};

int main()
{
	string1 o1;
	string1 o2 = o1;

	o1.display();
	o2.display();
}