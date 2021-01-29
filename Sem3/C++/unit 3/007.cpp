
// (7). Create a class MARIX of size mxn. Overload + and –
// operators for addition and subtraction of the MATRIX.


#include<iostream>
using namespace std;
class MATRIX
{
	int m,n,a[20][20];
	public:
	void input()
	{	
		int i,j;
		cout<<"\nenter number of raw: ";
		cin>>m;
		cout<<"\nenter number of column: ";
		cin>>n;
		cout<<"\n enter your velues:\n";
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}	
		}
	}
	
	void operator +(MATRIX o2)
	{  
		 int i,j;
       MATRIX c;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c.a[i][j]=a[i][j]+o2.a[i][j];	
			}	
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<c.a[i][j];
			}	
		}		
	}

};
int main()
{
	MATRIX o1,o2;
	o1.input();
    o2.input();
	o1+o2;

}
 