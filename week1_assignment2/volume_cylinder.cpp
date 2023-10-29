//WAP for finding the volume of the cylinder 
//by taking radius and height as input.

#include <iostream>
using namespace std;
int main(){
    float r,h;
    float pie=22.0/7.0;
    cout<<"enter radius:";
    cin>>r;
    cout<<"enter height:";
    cin>>h;

    cout<<"area="<<(pie*r*r*h);
}