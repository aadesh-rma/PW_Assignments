#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"give year:";
    cin>>n;

    if ((n%4==0 && n%100!=0)||(n%400==0)) {
        cout<<"leap year";
    }
    else cout<<"not leap year";
}
