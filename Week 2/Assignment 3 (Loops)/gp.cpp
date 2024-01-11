//Display this GP : 3,12,48,.. upto ‘n’ terms.

#include <iostream>
using namespace std;
int main(){
    int n,a = 3,r=4;
    cout<<"enter number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a*=r;
    }
}