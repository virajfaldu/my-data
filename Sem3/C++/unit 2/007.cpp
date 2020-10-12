
// (7). Create a class called scheme with scheme_id, scheme_name,
// outgoing_rate, and message_charge. Derive customer class
// form scheme and include cust_id, name and mobile_no data.
// Define necessary functions to read and display data. Create a
// menu driven program to read call and message information
// for a customer and display the detail bill.

#include<iostream>
using namespace std;
class scheme
{
	int scheme_id;
	char scheme_name[10];
	int msg_r;
	int call_r;
	public:
	void get_s()
	{
		cout<<"\nenter scheme_id: ";
		cin>>scheme_id;
		cout<<"\nenter scheme_name: ";
		cin>> scheme_name;
		cout<<"\nenter msg rate: ";
		cin>>msg_r;
		cout<<"\nenter call rate: ";
		cin>>call_r;
	}
	void putf()
	{
		cout<<"\n\nscheme id: "<<scheme_id;
		cout<<"\n\nscheme name: "<<scheme_name;
		cout<<"\n\nmsg rate: "<<msg_r;
		cout<<"\n\ncall rate: "<<call_r;
	}
};
class classform:public scheme
{
	int c_id;
	char name[10];
	long mob_no;
	public:
	void get_d()
	{
		get_s();
		cout<<"\nenter customer id: ";
		cin>>c_id;
		cout<<"\nenter customer name: ";
		cin>>name;
		cout<<"\nenter mobile no.: ";
		cin>>mob_no;
			
	}
	void put()
	{
		putf();
		cout<<"\n\ncustomer id: "<<c_id;
		cout<<"\n\ncustomer name: "<<name;
		cout<<"\n\nmobile: "<<mob_no;
		cout<<"\n\n";	
	}
};
int main()
{
	classform o1;
	o1.get_d();
	o1.put();
}