
// (2). Create a base class shape. Use this class to store two double
// type values that could be used to compute the area of figures.
// Derive two specific classes called triangle and rectangle from
// the base shape. Add to the base class, a member function
// get_data() to initialize the base class data members and
// another member function display_area() to compute and
// display the area of figures. Make display_area() as a virtual
// function and redefine this function in the derived class to suit
// their requirement

#include<iostream>
using namespace std;

class shape
{
	public:
	int h,b;
	
		void get_data()
		{
			cout<<"\nenter your height:";
			cin>>h;
			cout<<"\nenter your base:";
			cin>>b;
		}
		virtual  void display_area()
		{
			cout<<"this is is base class...";
		}	
};

class ractangle:public shape
{
	 void display_area()	
	{
				float area;
				area=h*b;
				cout<<"\narea of rectengle:"<<area;		
	}
};

class triangle:public shape
{
	 void display_area()	
	{
		float area;
		area=(h*b)/2;
		cout<<"\narea of tringle:"<<area<<"\n\n";		
	}	
};
int main()
{
		ractangle o1;
		triangle o2;
		shape *p,*r;
		p=&o1;
		r=&o2;
		o1.get_data();
		o2.get_data();
		p->display_area();
		r->display_area();			
}