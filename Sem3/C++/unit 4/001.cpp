
// (1). Write a program to create a function template for finding
// maximum value contained in an array

#include<iostream>
using namespace std;
template<class m>
void max()
{
    m a[10];
    for(int i=0;i<10;i++)
    {   
        cout<<"Enter Your value : ";
        cin>>a[i];
    }
    int max=-99999;
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
           max=a[i];
    }
    cout<<"max = "<<max;

}

int main()
{

    max();
}