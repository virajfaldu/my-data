
// (4). Create Calendar class with day, month and year as data
// members. Include default and parameterized constructors to
// initialize a Calendar object with a valid date value. Define a
// function AddDays to add days to the Calendar object. Define
// a display function to show data in “dd/mm/yyyy” formate

#include <iostream>
using namespace std;
class celender
{
	int dd, mm, yy;

public:
	celender(int a, int b, int c)
	{
		dd = a;
		mm = b;
		yy = c;
	}
	void addDays(int data)
	{
		dd = dd + data;
		if (dd > 30)
		{
			dd = dd - 30;
			mm++;
		}
		if (mm > 12)
		{
			mm = mm - 12;
			yy++;
		}
	}
	void display()
	{
		cout <<"\n "<< dd << "/" << mm << "/" << yy<<"\n\n";
	}
};
int main()
{
	int d, m, y, addy;
	cout << "\nEntre your date: ";
	cin >> d;
	cout << "\nEntre your month: ";
	cin >> m;
	cout << "\nEntre your year: ";
	cin >> y;
	celender date1(d, m, y);
	cout << "\nHow many days do you like to add:";
	cin >> addy;
	date1.addDays(addy);
	date1.display();
}
