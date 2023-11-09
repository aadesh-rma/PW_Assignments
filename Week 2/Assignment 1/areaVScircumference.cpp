/* Given the radius of the circle, predict whether numerically the area of this circle is larger than the
circumference or not.  */

#include <iostream>
using namespace std;
int main(){
    float r,pi,cir,area;
    cout<<endl<<"give radius:";
    cin>>r;
    
    pi = 22.0/7.0;

    cir = 2*pi*r;
    area = pi * r*r;

    cout<<"area="<<area<<endl<<"circumference="<<cir<<endl;

    if (area > cir) cout<<"Area is larger";
    else cout<<"circumference is larger";

}