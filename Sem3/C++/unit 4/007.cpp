
// (7). Write a program to illustrate the use of manipulators in file
// handling.

#include<iostream>
#include<fstream>
using namespace std;
void main()
{
	fstream file;
	file.open("file.txt",ios::out);
	char name[30];
	int rn;
	
	cout<<"\nenter your name:";
	file<<"\nNAME:";
	cin>>name;
	file<<name;

	cout<<"\nenter rall no.";
	cin>>rn;
	file<<rn;
	
	file.close();
	
	fstream read;
	read.open("file.txt",ios::in);
	cout<<name<<": "<<rn;
			
}
