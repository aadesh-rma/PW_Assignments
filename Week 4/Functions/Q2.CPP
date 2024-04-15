// Write a function that takes the radius of a circle as an argument and returns its area.
#include <iostream>
using namespace std;
 float arcir(float r){
    float pie = 22.0/7.0;
    return (pie*r*r);
 }
 int main(){
    float n;
    cout<<"give radius:";
    cin>>n;
    cout<<arcir(n);
 }