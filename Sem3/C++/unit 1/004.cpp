
// 4. Create a class student which stores the detail about roll no,name, marks of 5 subjects, i.e. science, Mathematics, English,C, C++.
//  The class must have the following:
// • Get function to accept value of the data members.
// • Display function to display values of data members.
// • Total function to add marks of all 5 subjects and store
// it in the data members named total.

#include<iostream>
using namespace std;
class student
{
	int rn;
	char name [30];
	int sub[5];
	int total1=0;
	 public:
	 void get()
	 {	
	 	int i;
	 	cout<<"Enter roll no of student: ";
	 	cin>>rn;
	 	cout<<"\nEnter name of student: ";
	 	cin>>name;
	 	for(i=0;i<5;i++)
	 	{	
	 		cout<<"\nEntre your marks of subject "<<i+1<<": ";
	 		cin>>sub[i];
	 	}
	 }
	 void display()
	 {
	 	cout<<"-------------------------------------------";
	 	cout<<"\n\nRoll no.-> "<<rn;
	 	cout<<"\n\nName->"<<name;
	 	for(int i=0;i<5;i++)
	 	{
	 		cout<<"\n\n"<<i+1<<".->"<<sub[i];
	 	}
	 }
	 void total()
	 {
	 	for(int i=0;i<5;i++)
	 	{
	 		total1=total1+sub[i];
	 	}
	 	cout<<"\n\nThis is a total of "<<name<<":"<<total1<<"\n\n";
	 }
	 		
};

int main()
{
	student o1;
	o1.get();
	o1.display();
	o1.total();
}