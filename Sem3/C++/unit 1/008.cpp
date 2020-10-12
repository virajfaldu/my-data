
// (8). Write a program to illustrate the use of this pointer.

#include<iostream>
using namespace std;
class num_2;
class num_1
{
	int a;
	public:
	void set_num()
	{
		cout<<"\nenter your num:";
		cin>>a;
	}
		friend void max( num_1 *,num_2 *);
		void output()
		{
			cout<<"\na= "<<a<<"\n";
		}
};
class num_2
{
	int b;
	public:
	void set_num()
	{
		cout<<"\nenter your num:";
		cin>>b;
	}
	
	friend void max( num_1 *,num_2 *);
	void output()
		{
			cout<<"b= "<<b<<"\n\n";
		}
};
void max( num_1 *o1,num_2 *o2)
{
	int tmp;
	tmp=o1->a;	
	o1->a=o2->b;
	o2->b=tmp;
}
int main()
{
	num_1 o1;
	num_2 o2;
	o1.set_num();
	o2.set_num();
	max(&o1,&o2);
	o1.output();
	o2.output();
}