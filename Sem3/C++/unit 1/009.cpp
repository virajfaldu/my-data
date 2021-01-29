
//(9). An election is contested by five candidates. The candidates
// are numbered 1 to 5 and the voting is done by marking the
// candidate number on the ballot paper. Write a program to
// read the ballots and count the votes cast for each candidate
// using an array variable count. In case a number is read
// outside the range of 1 to 5, the ballot should be considered as a
// ‘spoilt ballot’ and the program should also count the number
// of spoilt ballots.


#include<iostream>
using namespace std;
void main()
{
	int can[5][10],oth[10],d=0;
	int vote[20],ch[5],c=0,max=-999;
	cout<<"you can vote with 1-5 num";
	for(int v=0;v<10;v++)
	{
			cin>>vote[v];
			if(vote[v]==1)
			{
				can[0][v]=1;
			}
		else if(vote[v]==2 )
			{
				can[1][v]=1;
			}
		else if(vote[v]==3)
			{
				can[2][v]=1;
			}
		else if(vote[v]==4)
			{
				can[3][v]=1;
			}
		else if(vote[v]==5)
			{
				can[4][v]=1;
			}
		else 
	       {
	       	oth[v]=1;
	       }		
	}
	

	//checking for winner
	for(int i=0;i<5;i++)
	{
		c=0;
		for(int j=0;j<10;j++)
		{
			if(can[i][j]==1)
			{
				c++;
			}	
			if(i==0)
			{	
			    if(oth[j]==1)
			     {
			    	d++;
		     	}
			}
			
		}
		ch[i]=c;
		if(ch[i]>max)
		{
			max=ch[i];
		}	
	}
	if(d>max)
	{
		cout<<"other win";
	}
	else
	{
	for(int i=0;i<5;i++)
	{
		if(max==ch[i])
		{
			i++;
			cout<<"the winner is :"<<i;
			break;
		}
	}
	}
}