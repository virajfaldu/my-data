
// (10)A file contains a list of telephone numbers in the following
// format :
// (a) Ram
// 47890
// (b) Krishna 878787
// (c) ---------- ----------
// (d) --------- ----------
// The names contain only one word and the names and
// telephone numbers are separated by white space. Write a
// Program to read the tel.dat file and display the content. The
// names should be left justified and the number right-justified.

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	int num[10];
	file.open("010.txt",ios::out);
	for(int i=0;i<10;i++)
	{
		cin>>num[i];
		file<<num[i];
	}
	file.close();
	fstream file1;
	
	file1.open("010.txt",ios::in);
	
	int max=-99999999;
	for(int i=0;i<10;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	cout<<max;
	file1.close();
	
}