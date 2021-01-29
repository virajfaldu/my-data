
// Create a class account that stores customer name, account no,
// types of account. From this derive classes cur_acc and
// sav_acc to include necessary member function to do the
// following:
// • Accepts deposit from customer and update balance
// • Compute and Deposit interest
// • Permit withdrawal and Update balance.

#include <iostream>
#include <string>
using namespace std;
class ac
{
	long ac_no;
	char ac_type[10];
	char cus_name[20];

public:
	void getac()
	{
		cout << "\ncustomer name: ";
		cin.ignore();
		cin.getline(cus_name, 20);
		cout << "\ncustomer account number: ";
		cin >> ac_no;
		cout << "\ntype of account: ";
		cin.ignore();
		cin.getline(ac_type, 10);
		cout << "\n\n\t\t saved...........";
	}
};
class current : public ac
{
	int d, b = 0, wd;

public:
	void getd()
	{
		getac();
		cout << "\n\n\n\t save sucessfully";
	}
	void deposit()
	{
		cout << "\nenter your deposit value: ";
		cin >> d;
		b = b + d;
		cout << "\n\n\n\t deposit successfull....";
	}
	void wid()
	{
		cout << "\nenter your value for get money: ";
		cin >> wd;
		if ((b - wd) < 0)
		{
			cout << "\nnot enough balance you have: ";
		}
		else
		{
			b = b - wd;
		}
		cout << "\n\n\n\tcase withdrawal successfull....";
	}
	void pr_b()
	{
		cout << "\n your balance: " << b;
		cout << "\n\n\n\tdone.....";
	}
};
class saving : public ac
{
	int d, b = 0, wd, i;

public:
	void getd()
	{
		getac();
	}

	void deposit()
	{
		cout << "\nenter your deposit value: ";
		cin >> d;
		b = b + d;
		cout << "\n\n\n\t deposit successfull....";
	}

	void wid()
	{
		cout << "\nenter your value for get money: ";
		cin >> wd;
		if ((b - wd) < 0)
		{
			cout << "\nnot enough balance you have:";
			cout << "\n\n\n\tcase withdrawal unsuccessfull....";
		}
		else
		{
			b = b - wd;
			cout << "\n\n\n\tcase withdrawal successfull....";
		}

	}
	void pr_b()
	{
		cout << "\n your balance: " << b;
		cout << "\n\n\n\t done.....";
	}

	void interest()
	{
		i = b * .02;

		cout << "\nYour saving account interest is " << i << "rs.";
	}
};
int main()
{
	current c1;
	saving s1;
	int ta, c,e=0;
	cout << "\n\n|—-----------------------";
	cout << "\n\nthis is your type of account:";
	cout << "\n\n1.saving account:";
	cout << "\n\n2.current account:";
	cout << "\n\n|—-----------------------";
	cout << "\n\nenter type of customer account:  ";
	cin >> ta;

	if (ta == 1)
	{

		while (c != 6)
		{
			cout << "\n|—-----------------------|";
			cout << "\n\nyour choices";
			cout << "\n\n1. open a new accont:";
			cout << "\n\n2. put deposit";
			cout << "\n\n3. get withdrawal";
			cout << "\n\n4. compute a interest" ;
			cout << "\n\n5. print balance";
			cout << "\n\n6. exit";
			cout << "\n\n|—-----------------------|";
			cout << "\n\nenter your choice: ";
			cin >> c;
			if (c == 1)
			{
				s1.getd();
				e++;
			}
			if(e==0)
			{
                cout<<"\n\n\tyou have not any type account :)\n";
			}
			else if (c == 2)
			{
				s1.deposit();
			}
			else if (c == 3)
			{
				s1.wid();
			}
			else if (c == 4)
			{
				s1.interest();
			}
			else if (c == 5)
			{
				s1.pr_b();
			}
			else if (c == 6)
			{
				cout << "\n meet soon:";
				break;
			}
		}
	}
	else if (ta == 2)
	{
		c1.getd();
		while (c != 5)
		{

			cout << "\n|—-----------------------|";
			cout << "\n\nyour choices";
			cout << "\n\n1. open a new accont:";
			cout << "\n\n2. put deposit";
			cout << "\n\n2. get withdrawal";
			cout << "\n\n4. print balance";
			cout << "\n\n5. exit";
			cout << "\n\n|—-----------------------|";
			cout << "\n\nenter your choice:";
			cin >> c;
			if (c == 1)
			{
				s1.getd();
			}
			if(e==0)
			{
                cout<<"\n\n\tyou have not any type account :)\n";
			}
			else if (c == 2)
			{
				c1.deposit();
			}

			else if (c == 3)
			{
				c1.wid();
			}
			else if (c == 4)
			{
				c1.pr_b();
			}
			else if (c == 5)
			{
				cout << "\n meet soon:";
				break;
			}
		}
	}
}
