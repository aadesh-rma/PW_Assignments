// Given three points (x1, y1), (x2, y2) and (x3, y3),
// WAP to check if all the three points fall on one straight line.

#include <iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3,slope12,slope23;
    cout<<"Point 1 (x)";
    cin>>x1;
    cout<<"Point 1 (y)";
    cin>>y1;
    cout<<"Point 2 (x):";
    cin>>x2;
    cout<<"Point 2 (y):";
    cin>>y2;
    cout<<"Point 3 (x):";
    cin>>x3;
    cout<<"Point 3 (y):";
    cin>>y3;

    slope12 = (y2-y1)/(x2-x1);
    slope23 = (y3-y2)/(x3-x2);
    
    if(slope12==slope23) cout<<"yes";
    else cout<<"no";
}