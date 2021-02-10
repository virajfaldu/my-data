
// 1. Write a program to calculate the area of circle, rectangle and square using function overloading

#include <iostream>
using namespace std;

void area(float r)
{
    float area;
    area = 3.14 * r * r;

    cout << "\nThis is your area of circle : " << area;
}

void area(int l)
{
    int area;

    area = l * l;

    cout << "\nThis is your area of square : " << area;
}

void area(int h, int w)
{
    int area;
    area = h * w;
    cout << "\nThis is your area of rectangle : " << area;
}

int main()
{
    int l, w, h;
    float r;

    cout << "Enter your radious : ";
    cin >> r;

    cout << "Enter your lenght : ";
    cin >> l;

    cout << "Enter your width : ";
    cin >> w;

    cout << "Enter your height : ";
    cin >> h;

    area(r);
    area(l);
    area(h,w);
}