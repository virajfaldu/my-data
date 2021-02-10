#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <ctime>
using namespace std;
//-----------------------------------------------------------//
//					class declartion
//-----------------------------------------------------------//
class ac
{
  public:
	long ac_no;
	char ac_type[20];
	char cus_name[30];
	float w=0;
};


class saving : public ac
{
	float d=0, b = 0;
	long min = 10000000000, max = 9999999999;

  public:
		void getd();
		void deposit();
		inline long bin();
		void show();
		void pr_b();
		void wd();
		void show_ac(int a);
		void my_passbook(int i);
};

//------------------------------------------------------------//
//					member function defination
//------------------------------------------------------------//

void saving :: getd()
	{
		int i = 0;
		cout << "\n  your name\t\t: ";
		cin.ignore();
		cin.getline(cus_name, 30);
		srand(time(0));
		ac_no = rand() % max + min;
		cout << "\n  your account number\t: " << ac_no << "\n";
		cout << "\n  type of account \t: ";
		cin.ignore();
		cin.getline(ac_type, 20);
		do
		{
			if (i == 0)
			{
				cout << "\n  first deposit\n  (deposit>=1000) \t: ";
				cin >> d;
			}
			else
			{
				cout << "\n  deposit enter again   : ";
				cin >> d;
			}
			i++;
		} while (d < 1000);
		b = d + b;
		cout << "\n\n\t\t\t\trecord saved....";
	}

void saving :: deposit()
{
	cout << "\n\tenter deposit : ";
	cin >> d;
	b = b + d;
	cout << "\n\n\n\t deposit successfull....";
}
inline long saving :: bin()
{
	return ac_no;
}

void saving :: show()
{
	cout << '\n'
		 << "hey " << cus_name << " " << '\n'
		 << '\n';
}

void saving :: pr_b()
{
	cout << "\n your balance : " << b;
	cout << "\n\n\n\t done.....";
}
void saving :: wd()
{
	d = 0;
	cout << "\nhow many amount you want : ";
	cin >> w;
	if (w <= b)
	{
		b = b - w;
		cout << "\n\t\twithdraw successfully.....";
	}
	else
	{
		cout << "\n\t\tnot enough balance you have......";
	}
}
void saving :: show_ac(int a)
{
	cout << '\n'
		 << '\n'
		 << a << "\t     " << cus_name << "\t" << ac_no << "\t\t" << b;
}
void saving :: my_passbook(int i)
{
	cout<<i<<"\t"<<ac_no<<"\t"<<d<<"\t\t"<<w<<"\t"<<b<<'\n';
}

//--------------------------------------------------------------------------//
//						file function declartion
//-------------------------------------------------------------------------//

void write_d(); 			// for open a new accont
void dep();					// for deposite
void print();				// for print a amount
void delet();				// for delete a account
void withdraw();			// for a withdrawal
void show_accounts();		// for show all account of bank
void passbook();			// for display a passbook

//-------------------------------------------------------------------------//
//						main part of programe
//-------------------------------------------------------------------------//

int main()
{
	saving s1;
	int c;
	while (c != 8)
	{
		system("cls");
		cout << "\n|—-----------------------|";
		cout << "\n\nyour choices";
		cout << "\n\n1. open a new accont:";
		cout << "\n\n2. put deposit";
		cout << "\n\n3. withdraw";
		cout << "\n\n4. print balance";
		cout << "\n\n5. delete my account";
		cout << "\n\n6. show all accounts";
		cout << "\n\n7. my passbook";
		cout << "\n\n8. exit";
		cout << "\n\n|—-----------------------|";
		cout << "\n\nenter your choice : ";
		cin >> c;
		system("cls");

		if (c == 1)
		{
			write_d();
		}
		else if (c == 2)
		{
			dep();
		}
		else if (c == 3)
		{
			withdraw();
		}
		else if (c == 4)
		{
			print();
		}
		else if (c == 5)
		{
			delet();
		}
		else if (c == 6)
		{
			show_accounts();
		}
		else if (c == 7)
		{
			passbook();
		}
		else if (c == 8)
		{
			cout << "\n meet soon:";
			break;
		}
		cin.ignore();
		cin.get();
	}
}

//-----------------------------------------------------------------------------//
//						file function defination
//----------------------------------------------------------------------------//

void write_d()
{
	fstream f, g;
	g.open("passbook.txt",ios::app|ios::binary);
	f.open("bank1.txt", ios::app | ios::binary);
	saving s1;
	s1.getd();
	f.write((char *)&s1, sizeof(s1));
	g.write((char *)&s1, sizeof(s1));
	f.close();
	g.close();
}

void dep()
{
	fstream file, g;
	file.open("bank1.txt", ios::in | ios::out | ios::ate | ios::binary);
g.open("passbook.txt",ios::app|ios::binary);
	saving s1;
	long ac;
	int c=0;
	cout << "\n\n  enter a account number : ";
	cin >> ac;
	int tel;
	file.seekg(0);
	while (file.read((char *)&s1, sizeof(s1)))
	{
		if (s1.bin() == ac)
		{
			s1.deposit();
			file.seekp(file.tellp() - sizeof(s1));
			file.write((char *)&s1, sizeof(s1));
			g.write((char *)&s1, sizeof(s1));
			c++;
			break;
		}
	}
	if(c==0)
    {
        cout<<"\n\n\n\tyour account does not exist";
    }
	file.close();
	g.close();
}

void withdraw()
{
	fstream file,g;
	saving s1;
	long ac;
	int c = 0;
	g.open("passbook.txt",ios::app|ios::binary);
	file.open("bank1.txt", ios::in | ios::out | ios::ate | ios::binary);
	cout << "\n\n  enter your account number : ";	cin >> ac;
	file.seekg(0);
	while (file.read((char *)&s1, sizeof(s1)))
	{
		if (s1.bin() == ac)
		{
			s1.wd();
			file.seekp(file.tellp() - sizeof(s1));
			file.write((char *)&s1, sizeof(s1));
			c = 1;
			g.write((char*)&s1,sizeof(s1));
			break;
		}
	}
	if (c == 0)
	{
		cout << "\n\t\tthis account does not exist.......";
	}
	file.close();
	g.close();
}

void print()
{
	fstream f;
	f.open("bank1.txt", ios::in | ios::binary);
	saving s1;
	long ac1;
	int c = 0;
	cout << "\n\n  enter a account number : ";
	cin >> ac1;
	while (f.read((char *)&s1, sizeof(s1)))
	{
		if (s1.bin() == ac1)
		{
			s1.show();
			s1.pr_b();
			c++;
			break;
		}
	}
	if (c == 0)
	{
		cout << "\n\t\tthis account does not exist";
	}
	f.close();
}

void delet()
{
	ifstream f;
	ofstream g;
	saving s1;
	long ac;
	int c = 0;
	f.open("bank1.txt", ios::in | ios::binary);
	g.open("bank2.txt", ios::app | ios::binary);
	cout << "\n\n  enter your account number : ";
	cin >> ac;
	while (f.read((char *)&s1, sizeof(s1)))
	{
		if (s1.bin() != ac)
		{
			g.write((char *)&s1, sizeof(s1));
		}
		else
		{
			c++;
		}
	}
	if (c == 0)
	{
		cout << "\n\n\n\tyour account does not exist...";
	}
	else
	{
		cout << "\n\n\n\t accout delete successfully....";
	}
	f.close();
	g.close();
	remove("bank1.txt");
	rename("bank2.txt", "bank1.txt");
}

void show_accounts()
{
	fstream f;
	f.open("bank1.txt", ios::in | ios::binary);
	saving s1;
	int i = 1;
cout << "\n\n---------------------------------------------------------------";
	cout << "\nNO.\t\tNAME\t\tACCOUNT NO.\t\tBALANCE";
	cout << "\n---------------------------------------------------------------\n";
	while (f.read((char *)&s1, sizeof(s1)))
	{
		s1.show_ac(i);
		i++;
	}
	if (i == 1)
	{
		cout << "\n\t\t no accounts available";
	}
	f.close();
}

void passbook()
{
	fstream g;
	long ac;
	saving s2;
	g.open("passbook.txt",ios::in|ios::binary);
	cout << "\n\n  enter a account number : ";
	cin >> ac;
	int i=1,c=0;

		cout << "\n\n---------------------------------------------------------------";
	cout << "\nNO.\tACCOUNT NO.\tdeposit\t  withdrawal\tBALANCE";
	cout << "\n---------------------------------------------------------------\n";
	while(g.read((char*)&s2,sizeof(s2)))
	{
		if(s2.bin()==ac)
		{
			s2.my_passbook(i);
			c++;
			i++;
		}
	}
	if(c==0)
	{
		cout<<"\n\n\t\taccount does not exist";
	}
	g.close();
}


