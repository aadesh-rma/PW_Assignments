//Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    for(int i=n;i<=n*10;i+=n){
        cout<<i<<endl;
    }
}