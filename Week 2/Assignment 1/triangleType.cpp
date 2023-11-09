/* Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
isosceles triangle. */

#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter three sides of a trianlge:";
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a)
    {
    if(a==b && b==c) cout<<"equilateral";
    else if (a==b || b==c || a==c) cout<<"iso-scalese";
    else cout<<"scalene";
    }
    else cout<<"invalid sides for a triangle";
}