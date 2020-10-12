
// (4). For multiple inheritance, write a program to show the
// invocation of constructor and destructor.

#include<iostream>
using namespace std;
class base_first
{
	public:
	base_first()
	{
		cout<<"\nthis base first constructer";
	}
    ~base_first()
	{
		cout<<"\nthis base first distructer";	
	}
};
class base_two
{
	public:
	base_two()
	{
		cout<<"\nthis base two constructer";
	}
    ~base_two()
	{
		cout<<"\nthis base two distructer";	
	}
};
class derived:public base_first,public base_two
{
	public:
	 derived()
	{
		cout<<"\nthis derived constructer";
	}
	~ derived()
	{
		cout<<"\nthis derived distructer";	
	}
};
int main()
{
	
	derived o2;	
}