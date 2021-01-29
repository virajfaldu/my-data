
// (6). Write a program to illustrate the use of read() and write()
// functions for Binary mode Input/Output.


#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	
	fstream file;
	char ch,str[30];
	int in;
	
	file.open("file1.cpp",ios::out);
	
	cout<<"\nenter one charcter ";
	file<<"\nstring:";
	cin>>str;
	file<<str;
		
	cout<<"\nenter one integer value:";
	file<<"\ninteger:";
	cin>>in;
	file<<in;
	
	cout<<"\nenter one charter :";
	file<<"\ncharcter";
	cin>>ch;
	file<<ch;

	
	file.close();
	
		fstream g;
		g.open("file1,cpp",ios::in);
		cout<<str<<in<<ch;	
}

