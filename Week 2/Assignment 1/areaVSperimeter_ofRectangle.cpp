/*Given the length and breadth of a rectangle, write a program to find whether numerically the area of
the rectangle is greater than its perimeter.   */

#include <iostream>
using namespace std;
int main(){
    float l,b,per,area;
    cout<<endl<<"give lenght:";
    cin>>l;
    cout<<endl<<"give breadth:";
    cin>>b;

    per = 2*(l+b);
    area = l*b;

    cout<<"area="<<area<<endl<<"perimeter="<<per<<endl;

    if (area > per) cout<<"Area is larger";
    else cout<<"perimeter is larger";

}