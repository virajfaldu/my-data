
// (8). Write a program to illustrate the use of file pointer
// manipulation functions.

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("008.txt",ios::out);
	char name[30];
	int pr;
	
	cout<<"\nenter product name: ";
	file<<"\nPRODUCT NAME:";
	cin>>name;
	file<<name;

	cout<<"\nenter price: ";
	file<<"\nPRICE:";
	cin>>pr;
	file<<pr;
	
	file.close();
	
	fstream read;
	read.open("file.txt",ios::in);
	cout<<pr<<" : "<<name;
			
}
