
// (6). Create a class distance which contains feet and inch as a data
// member. Overhead = =, <and> operator for the same class.
// Create necessary functions and constructors too.

#include<iostream>
using namespace std;
class distanc
{
	int inch , feet;
	public:
	distanc()
	{
		cout<<"enter feet:";
		cin>>feet;
		cout<<"enter inch:";
		cin>>inch;			
	}	
	int operator <(distanc a)
	{
		if(feet<a.feet)
		{
			return 1;
		}
		else if(feet==a.feet)
		{
			if(inch<a.inch)
			{
				return 1;
			}	
			else
			{
				return 0;
			}	
		}				
	}
	int operator >(distanc a)
	{
		if(feet>a.feet)
		{
			return 1;	
		}
		else if(feet==a.feet)
		{
			if(inch>a.inch)
			{
				return 1;	
			}	
			else
	        {
				return 0;
			}	
		}				
	}
	int operator ==(distanc a)
	{
		if(feet==a.feet && inch==a.inch)
		{
			return 1;	
		}	
	}
		
};
int main()
{
	
	distanc d1,d2;
	int s;
	s=d1<d2;
	if(s==1)
	{
		cout<<"d1<d2";
	}
	s=d1>d2;
    if(s==1)
	{
		cout<<"d1>d2";
	}
	s=d1==d2;
	 if(s==1)
	{
		cout<<"d1==d2";
	}
    
}