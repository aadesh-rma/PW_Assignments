// Q1 : Write a program to find the product of two numbers using pointers.

#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter first number";
    cin>>x;
    cout<<"enter second number";
    cin>>y;

    int * px = &x;
    int * py = &y;

    cout << *px * *py;
}