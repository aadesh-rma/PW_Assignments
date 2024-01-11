// Display this AP : 4,7,10,13,16.. upto ‘n’ terms.

#include <iostream>
using namespace std;
int main(){
    int n,a = 4,d=3;
    cout<<"enter number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=d;
    }
}