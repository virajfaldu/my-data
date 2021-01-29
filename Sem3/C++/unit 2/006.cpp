
// (6). Write a base class named Employee and derive classes Male
// employee and Female Employee from it. Every employee has
// an id, name and a scale of salary. Make a function
// ComputePay (in hours) to compute the weekly payment of
// every employee. A male employee is paid on the number of
// days and hours he works. The female employee gets paid the
// wages for 40 hours a week, no matter what the actual hours
// are. Test this program to calculate the pay of employee.

#include <iostream>
using namespace std;
class employee
{
	int id;
	char s[30];
	int scale;

  public:
	void get()
	{
		cout << "\nEnter Employee id:";
		cin >> id;
		cout << "\nEnter Employee name:";
		cin >> s;
		cout << "\nEnter Scale Of salary:";
		cin >> scale;
	}
	void sal(int days, int hour)
	{
		int th, ts;
		th = days * hour;
		ts = th * scale;
		cout << "\nthis actual salary " << ts;
	}
	void getfsl(int d)
	{
		int fs;
		fs = d * scale;
		cout << "\nthis actual salary " << fs;
	}
};

class male : public employee
{
  public:
	void getid()
	{
		get();
	}
	void getsal(int days, int hour)
	{
		sal(days, hour);
	}
};
class female : public employee
{
  public:
	void getid()
	{
		get();
	}
	void getsal()
	{
		getfsl(40);
	}
};
int main()
{
	male o1;
	female o2;
	char gen;
	int days,h;

	cout << "\nEnter gender of employee(for male 'm' and for female 'f'):";
	cin >> gen;

	if (gen == 'm' || gen == 'M')
	{
		
		o1.getid();
		cout << "\nEnter Employee Day:";
		cin >> days;
		cout << "\nEnter Emplooye hour";
		cin >> h;
		o1.getsal(days, h);
	}

	else if (gen == 'f' || gen == 'F')
	{
		o2.getid();
		o2.getsal();
	}
}