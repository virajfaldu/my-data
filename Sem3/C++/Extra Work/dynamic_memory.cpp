#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void getdata(int ,int);
    void showdata();
    
};

void A :: getdata(int a,int b)
{
    this->a=a;
    this->b=b;
}
void A :: showdata()
{
    cout<<"a : "<<a<<"\nb : "<<b;
    
}
int main()
{
    A *p;
    p= new A;
    p->getdata(3,4);
    p->showdata();
}