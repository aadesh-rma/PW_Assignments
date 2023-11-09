//Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include <iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"provide coordinates points on the two axes:";
    cin>>x>>y;
    if (x==0 || y==0)
    {
        if(x==0 && y==0) cout<<"on Origin";
        else if (x==0) cout<<"on Y-axis";
        else cout<<"on X-axis";
    }
    else cout<<"point is neither on origin nor any of the axes";
}